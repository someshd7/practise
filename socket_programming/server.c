#include<sys/socket.h>
#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<arpa/inet.h>
#define size 128
int main(int argc, char *argv)
{
  struct sockaddr_in server,client;
  int sockfd,clientfd;
  socklen_t serverlen,clientlen;

  sockfd=socket(AF_INET,SOCK_STREAM,0);
  server.sin_family=AF_INET;
  server.sin_addr.s_addr=htonl(INADDR_ANY);
  server.sin_port=htos(9800);
  serverlen=sizeof(server);
  int ret=bind(sockfd,(struct sockaddr*)&server,serverlen);
  if(ret ==-1)
     {
         perror("oops:");
     }
   listen(sockfd,5);

  clientfd=accept(sockfd,(struct sockaddr*)&client,clientlen);
  char msg[size];
  recv(clientfd,msg,size,0);
  printf("recieved message is %s",msg);

 //close(sockfd);
}
