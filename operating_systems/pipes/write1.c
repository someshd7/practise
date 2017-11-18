#include<unistd.h>
#include<stdlib.h>

int main()
{
  if(write (1,"writing some data..\n",20) !=18)
  	write(2,"error\n",5);
  	
  exit(0);
 }
  	
