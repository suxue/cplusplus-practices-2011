#include<stdio.h>
#include<conio.h>
int main()
{
  int x[5];
  int i;
  
  for(i=0;i<5;i++)
  {
  printf("������x[%d]��ֵ:",i);
  //printf("x[%d]",i);
   scanf("%d",&x[i]);                                          
  } 
  for(i=0;i<5;i++)
   printf("%d\t",*(x+i));
   printf("\a");
   getch();
   return 0;                     
}
