#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<string.h>
#include<arpa/inet.h>

#define SERVER "127.0.0.1"
#define PORT 9999
#define CMD_LENGTH 10240

int init_channel(char *ip, int port, char *name);
int execute(char* str, int socket);
