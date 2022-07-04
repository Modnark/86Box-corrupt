#include <86box/corrupt.h>
#include <86box/corrupt-server.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <pthread.h>
#endif

// Please correct this if it does not compile for win32
void start_corrupt_server() {
#ifdef _WIN32
    HANDLE hThread;

    hThread = CreateThread(
            NULL,
            0,
            run_corrupt_server_win32,
            0,
            0,
            0
        );
#else
    pthread_t thread_id;
    pthread_create(&thread_id, NULL, run_corrupt_server, NULL);
#endif
}
