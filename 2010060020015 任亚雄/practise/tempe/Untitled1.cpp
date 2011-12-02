#include<stdio.h>
#include<conio.h>
int main()
{
   int x=100,y=200,z=300;
   int const *ptr1=&x;
   const int *ptr2=&y;
   ptr1=&y;
   //*ptr2=300;
   int *const ptr3=&z;
   //   ptr3=&x;
   printf("%d\n",*ptr3);
   printf("%d\n",*ptr1);
   printf("%d",*ptr2);
   getch();
   return 0;                      
                      
}
