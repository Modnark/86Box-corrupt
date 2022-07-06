#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>
#include <ctype.h>
#include <86box/corrupt-helpers.h>
#include <86box/86box.h>
#include <86box/mem.h>

#ifdef _WIN32
// Win32 includes
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
#else
// Unix includes
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <asm-generic/socket.h>
#endif

extern void run_corrupt_server();
extern void run_corrupt_server_win32();
