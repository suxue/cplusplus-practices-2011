//test 一维数组
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[5],i;
  for(i=0;i<5;i++)
  {
  printf("输入a[%d]的值是:",i);
  scanf("%d",&a[i]);                                          
  }
 for(i=0;i<5;i++)
   printf("数组a[%d]的值是：%d\n",i,a[i]); 
   
   for(i=0;i<5;i++)
   {
     printf("输入的a[%d]的值是：",i);
     scanf("%d",(a+i));                                        
   }                 
   printf("%d",a[2]);
   for(i=0;i<5;i++)
   printf("输入的a[%d]的值是:%d\n",i,*(a+i));
   getch();
   return 0;    
} 
