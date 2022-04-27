#include <pine/sockets.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <memory.h>
#include <stdio.h>

addrinfo* socket_address_info(const char* port)
{
    struct addrinfo hints;
    struct addrinfo* ai;

    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;

    if (getaddrinfo(NULL, port, &hints, &ai) != 0)
        perror("getaddrinfo()");

    return ai;
}

int socket_bind(addrinfo* ai)
{
    int insock;
    for (; ai != NULL; ai = ai->ai_next) {
        int option = 1;
        insock = socket(ai->ai_family, ai->ai_socktype, 0);
        setsockopt(insock, SOL_SOCKET, SO_REUSEADDR, &option, sizeof(option));

        if (insock == -1)
            continue;

        if (bind(insock, ai->ai_addr, ai->ai_addrlen) == 0)
            break;
    }

    if (ai == NULL)
        perror("socket() or bind()");

    return insock;
}

void socket_listen(int insock)
{
    if (listen(insock, SOMAXCONN) != 0)
        perror("listen()");
}

int pine::socket_connect(const char* port)
{
    addrinfo* ai = socket_address_info(port);
    int insock = socket_bind(ai);
    freeaddrinfo(ai);
    socket_listen(insock);
    return insock;
}
