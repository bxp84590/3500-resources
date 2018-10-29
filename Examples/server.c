#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define BUFFER_SIZE 1024
#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 60000

int main(int argc, char *argv[])
{
    int socket_listen;
    int socket_receive;
    
    struct sockaddr_in my_address;
    struct sockaddr_in receive_address;
    
    int i;
    int address_size;
    int bytes_received;
    
    struct sockaddr remote_address;
    int receive_message_size;
    char buffer[BUFFER_SIZE];
    int select_ret;
    
    /* Create a socket for listening for incoming connections. */
    socket_listen = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    printf("socket_listen = %d\n", socket_listen);
    if (socket_listen < 0)
    {
        printf("socket() failed\n");
        exit(0);
    }
    printf("Server socket created\n");
    
    /* Make address structure for my local address. */
    memset(&my_address, 0, sizeof(my_address));
    my_address.sin_family = AF_INET;
    my_address.sin_addr.s_addr = inet_addr(SERVER_IP);
    my_address.sin_port = htons((unsigned short int)SERVER_PORT);
    
    /* Bind socket to the local address. */
    i = bind(socket_listen, (struct sockaddr *)&my_address, sizeof(my_address));
    if (i < 0)
    {
        printf("bind() failed\n");
        exit(0);
    }
    printf("Server socket bound\n");
    
    /* Listen for incoming connections. */
    i = listen(socket_listen, 5);
    if (i < 0)
    {
        printf("listen() failed\n");
        exit(0);
    }
    printf("Server waiting for connection\n");
    
    /* Accept the incoming connection. */
    address_size = sizeof(receive_address);
    socket_receive = accept(socket_listen, (struct sockaddr *) &receive_address, &address_size);

    printf("socket_receive = %d\n", socket_receive);
    
    printf("Server received a connection\n");
    
    while (1)
    {
        bytes_received = recv(socket_receive, buffer, BUFFER_SIZE, 0);
        buffer[bytes_received] = '\0';
        printf("Received: %s\n", buffer);
        
        if (strcmp(buffer, "shutdown") == 0)
        {
            break;
        }
    }
    
    close(socket_receive);
    close(socket_listen);
    
    return 0;
}

