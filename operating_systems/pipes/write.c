#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

  
 int main()
  {
	pid_t fd;
	
	fd=open("write.txt",O_CREAT | O_WRONLY,S_IRUSR | S_IWUSR);
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
 	
		
	
