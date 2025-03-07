#include <86box/corrupt-server.h>

#ifdef _WIN32
#define PORT    "59891"
#else
#define PORT    59891
#endif
enum server_packets {
    srv_Invalid,
    srv_GetMemSize,
    srv_BlastMem,
	srv_BlastMemMan
};

void run_corrupt_server() {
    write_to_log_file("==========================[ Corrupt server started ]==========================", 1);
    int connfd = 0, listenfd = 1;
    struct sockaddr_in serv_addr;
    char sendBuff[5005];
    char readBuff[5005];
    int count = 0;
    int total = 0;

#ifdef _WIN32
    // Win32 TCP code
    WSADATA wsaData;
    int iResult;

    SOCKET ListenSocket = INVALID_SOCKET;
    SOCKET ClientSocket = INVALID_SOCKET;

    struct addrinfo *result = NULL;
    struct addrinfo hints;

    // Init winsock2
    iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if(iResult != 0) {
        char strBuffer[255];
        sprintf(strBuffer, "WSAStartup failed with error: %d", iResult);
        write_to_log_file(strBuffer, 1);
    }

    // Configure winsock2? (idk I don't do win32)
    ZeroMemory(&hints, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    hints.ai_flags = AI_PASSIVE;

    // Resolve server address and port
    iResult = getaddrinfo(NULL, PORT, &hints, &result);
    if(iResult != 0) {
        char strBuffer[255];
        sprintf(strBuffer, "getaddrinfo failed with error: %d", iResult);
        write_to_log_file(strBuffer, 1);
        WSACleanup();
    }

    // Create a SOCKET for connecting to the server
    listenfd = socket(result->ai_family, result->ai_socktype, result->ai_protocol);
    if(listenfd == INVALID_SOCKET) {
        char strBuffer[255];
        sprintf(strBuffer, "socket creation failed with error: %d", iResult);
        write_to_log_file(strBuffer, 1);
        freeaddrinfo(result);
        WSACleanup();
    }

    // Setup the TCP listening socket
    iResult = bind(listenfd, result->ai_addr, (int)result->ai_addrlen);
    if(iResult == SOCKET_ERROR) {
        char strBuffer[255];
        sprintf(strBuffer, "socket creation failed with error: %d", iResult);
        write_to_log_file(strBuffer, 1);
        freeaddrinfo(result);
        closesocket(listenfd);
        WSACleanup();
    }

    freeaddrinfo(result);
#else
    // Unix TCP code
    listenfd = socket(AF_INET, SOCK_STREAM, 0);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(PORT);

    int true = 1;
    setsockopt(listenfd,SOL_SOCKET,SO_REUSEADDR,&true,sizeof(int));

    bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr));
#endif
    // Everything should be cross-platform here
    memset(&serv_addr, '0', sizeof(serv_addr));
    memset(sendBuff, '0', sizeof(sendBuff));

    listen(listenfd, 10);

    while(1)
    {
        connfd = accept(listenfd, (struct sockaddr*)NULL, NULL);
        write_to_log_file("Accepted inbound connection", 1);

        snprintf(sendBuff, sizeof(sendBuff), "1");

        while((count = recv(connfd, readBuff, sizeof(readBuff), 0)) > 0) {
            write_to_log_file("Client sent data: ", 0);
            write_to_log_file(readBuff, 1);


            char *tokens[256];
            split_to_tokens(tokens, readBuff);

            int packet_id = atoi(tokens[0]);

            switch(packet_id) {
                case srv_Invalid:
                    snprintf(sendBuff, sizeof(sendBuff), "0");
                    break;
                case srv_GetMemSize:
                    snprintf(sendBuff, sizeof(sendBuff), "%d", get_memory_size());
                    break;
                case srv_BlastMem:
                    do_corruption_blast(atoi(tokens[1]));
					break;
				case srv_BlastMemMan:
					do_corruption_blast_manual(readBuff);
                    break;
            }

            #ifdef _WIN32
            send(connfd, sendBuff, strlen(sendBuff), 0);
            #else
            write(connfd, sendBuff, strlen(sendBuff));
            #endif

            // Clear buffers
            memset(sendBuff, 0, sizeof sendBuff);
            memset(readBuff, 0, sizeof readBuff);
            memset(tokens, 0, sizeof tokens);
        }

        if(count == -1) {
            write_to_log_file("Some kind of error happened after recv()", 1);
        }
        else if (count == 0) {
            write_to_log_file("Client has disconnected", 1);
        }

        close(connfd);

        // Clear buffers
        memset(sendBuff, 0, sizeof sendBuff);
        memset(readBuff, 0, sizeof readBuff);
    }
}

#ifdef _WIN32
void run_corrupt_server_win32(LPVOID lPtr) {
    run_corrupt_server();
}
#endif


