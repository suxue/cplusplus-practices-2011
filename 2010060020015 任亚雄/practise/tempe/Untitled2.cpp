#include<stdio.h>
#include<conio.h>
int main()
{
  int a=1,b=2,c=3;
  int *const ptr1=&a;
  const int *ptr2=&b;
  //*ptr2=4;
 // ptr1=&c;
 int const *ptr3=&c;
 //*ptr3=7;
  printf("%d\t%d\t%d",*ptr1,*ptr2,*ptr3);
  getch();
  return 0;                     
                      
}
