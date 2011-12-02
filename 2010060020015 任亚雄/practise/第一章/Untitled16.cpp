#include<stdio.h>
#include<conio.h>
int main()
{
  int x=100,y=200;
  int *ptr=&x;
  
  printf("变量x的地址是%p\n",&x);
  printf("变量y的地址是%p\n",&y);
  printf("指针的地址是%p\n",&ptr);
  
  printf("变量x的值是%d\n",x);
  printf("变量y的值是%d\n",y);
  printf("ptr的内容是%p\n",ptr);
  printf("ptr的值是%d\n",*ptr);
  getch();
  return 0;
   
                        
}
