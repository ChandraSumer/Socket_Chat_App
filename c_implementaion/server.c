#include<stdio.h>
#include<sys/types.h>
//number of data tpes used in sys calls
#include<sys/socket.h>
//structures needed to create socekts
#include<netinet/in.h>
//structures needed to access internet domain addresses.

//Function is called when a system call fails and outputs an error
void error(cahr *msg)
{
    perror(msg);
    exit(1);
} 

