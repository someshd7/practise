#include<stdio.h>
#include<stdlib.h>

int main()
{
  char *mem;
  char *ptr;
  mem=(char*)malloc(1024);
  if(mem==NULL)
      exit(EXIT_FAILURE);
  ptr=mem;
  while(1)
    {
       ptr='\0';
       ptr++;
    }
  exit(EXIT_SUCCESS);
} 
