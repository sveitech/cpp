#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <string.h>

int main()
{
    struct addrinfo hints;
    struct addrinfo *results = nullptr;

    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;

    int status = getaddrinfo(nullptr, "4444", &hints, &results);

    if(status == 0)
    {
        std::cout << "getaddrinfo success" << std::endl;

        char ip4[INET4_ADDRSTRLEN];
    }

    freeaddrinfo(results);

    return 0;
}