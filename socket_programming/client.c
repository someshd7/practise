#include<stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

int main(int argc, char const *argv[])
{
  struct server;
  int sockfd;
  socklen_t serverlen;
  sockfd=socket(AF_INET,SOCK_STREAM,0);
  server.sin_family=AF_INET;
  server.sin_addr=inet_addr("127.0.0.1");
  server.sin_port=htons(9800);
  serverlen=sizeof(server);

  connect(sockfd,(struct sockaddr*)&server,serverlen);

  char msg[]="this is from client";
  send(sockfd,msg,sizeof(msg),0);
  close(sockfd);

  return 0;
}
