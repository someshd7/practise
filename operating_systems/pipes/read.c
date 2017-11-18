#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

  
 int main()
  {
	int fd;
	char p[20];
	fd=open("write.txt",O_RDONLY,S_IRUSR | S_IWUSR);
	printf("writing to write.txt\n open write.txt\n");
	//write(fd,"writing first time\n",19);
	if(fd == -1 )
	  {
	    perror("error opening file\n");
	   }
	 else
	 {
	   write(fd,"shashank mc\n",11);
	  }
	close(fd);
	return 0;
 }
 	
	
