#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(int argc,char *argv[])
{
   char* file=argv[1];
   int fd;
   struct flock lock;
   
   printf("opening %s\n",file);
   fd=open(file,O_WRONLY);
   printf("locking\n");
   
   memset (&lock,0,sizeof(lock));
   lock.l_type=F_WRLCK;

   fcntl(fd,F_SETLKW,&lock);

   printf("locked hit enter to unlock\n");
   getchar();
   
   printf("unlocking\n");
   lock.l_type=F_UNLCK;
   fcntl(fd,F_SETLKW,&lock);
   
   close(fd);
   return 0;
}

