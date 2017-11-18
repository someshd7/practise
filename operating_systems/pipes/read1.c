#include<unistd.h>
#include<stdlib.h>

int main()
  {
     char buffer[30];
     int nread;
     
     nread=read(0,buffer,30);
     if(nread== -1)
     	write(2,"read error occoured\n",20);
     	
     	
     if((write(1,buffer,nread))	!= nread)
     	write(2,"write error occoured\n",21);
     	
    exit(0);
  }   	
