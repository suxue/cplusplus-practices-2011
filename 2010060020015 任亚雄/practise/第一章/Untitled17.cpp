#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a=100,b=200;
  const int *ptr=&a;
  ptr=&b;
  b=400;
  int const *ptr2=&b;
  ptr2=&a;
  a=300;
  printf("ptr2=%d\n",*ptr2);
  printf("%d",*ptr);
  system("pause");
  return 0;                      
}
