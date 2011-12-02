//2011-11-7
#include<stdio.h>
#include<conio.h>
int main()
{
  int x=100,y=200,z=300;
  printf("变量x的地址%p\n",&x);
  printf("变量y的地址%p\n",&y);
  printf("变量z的地址%p\n",&z);
  
  
  printf("变量x的值%d\n",x);
  printf("变量y的值%d\n",y);
  printf("变量z的值%d\n",z);
  getch();
  return 0;                      
                      
}
