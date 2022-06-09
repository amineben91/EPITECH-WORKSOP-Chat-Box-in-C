/*
** EPITECH PROJECT, 2022
** EPITECH-WORKSOP-Chat-Box-in-C
** File description:
** init_server
*/

#include "server.h"

server_t *init_server(char *ip_addr, int port)
{
    server_t *server = malloc(sizeof(server_t));

    server->ip_addr = ip_addr;
    server->port = port;

    // init socket
    server->socket = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in addrServer;
    socklen_t amn = sizeof(addrServer);
    // init server addr
    struct sockaddr_in addr_server;
    addr_server.sin_family = AF_INET;
    addr_server.sin_port = htons(port);
    addr_server.sin_addr.s_addr = inet_addr(ip_addr);
    // bind
    bind(server->socket, (struct sockaddr *)&addrServer, sizeof(addr_server));
    // listen
    listen(server->socket, 10);
    fd_set fds;
    fd_set rfds;
    fd_set wfds;

    return server;
}