#include<stdio.h>
#include "arith.h"
int main()
{
  int a=10,b=20,x,y;
  x=add(a,b);

  y=sub(a,b);



  printf("addition is %d",x);
  printf("sum is %d\n",y);
  printf("mul is %d",mul(a,b));
  return 0;
}
