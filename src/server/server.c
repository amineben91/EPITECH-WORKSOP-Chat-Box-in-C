/*
** EPITECH PROJECT, 2022
** EPITECH-WORKSOP-Chat-Box-in-C
** File description:
** server
*/

#include "server.h"

void server(char *ip_addr, int port)
{
    server_t *server = init_server(ip_addr, port);
    //accept(sock, (SOCKADDR *)&csin, &crecsize);

    run_server(server);
}