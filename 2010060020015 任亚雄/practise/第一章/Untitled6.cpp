#include<stdio.h>
#include<conio.h>
int main()
{
  int x[5]={10,20,30,40,50};
  int i;
  
  for(i=0;i<5;i++)
  printf("&x[%d]�ĵ�ַ��%x\n",i,&x[i]);
  for(int i=0;i<5;i++)
  printf("&x[%d]�ĵ�ַ��%x\n",i,x+i);
  for(i=0;i<5;i++)
  printf("the value of x[%d] is %d\n",i,x[i]);
  for(int i=0;i<5;i++)
   printf("the value of x[%d] is %d\n",i,*(x+i));
   getch();
   return 0;                      
                      
}
