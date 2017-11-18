#include<stdio.h>

void fun(int a)
{
  printf("value of a is %d\n",a);
}
int main()
{
  void (*funptr)(int)=&fun;
  /*void (*funptr)(int);
    fun_ptr=&fun;
  */

  (*funptr)(10);

  return 0;
}


