//test һά����
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[5],i;
  for(i=0;i<5;i++)
  {
  printf("����a[%d]��ֵ��:",i);
  scanf("%d",&a[i]);                                          
  }
 for(i=0;i<5;i++)
   printf("����a[%d]��ֵ�ǣ�%d\n",i,a[i]); 
   
   for(i=0;i<5;i++)
   {
     printf("�����a[%d]��ֵ�ǣ�",i);
     scanf("%d",(a+i));                                        
   }                 
   printf("%d",a[2]);
   for(i=0;i<5;i++)
   printf("�����a[%d]��ֵ��:%d\n",i,*(a+i));
   getch();
   return 0;    
} 
