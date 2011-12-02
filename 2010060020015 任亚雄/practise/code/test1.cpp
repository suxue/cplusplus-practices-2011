#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *p;
   p=(int *)malloc(5*sizeof(int));
   for(int i=0;i<5;i++)
   {
     scanf("%d",&p[i]);                               
   }                  
   for(int i=0;i<5;i++)
   printf("%d",p[i]);
 p=(int *)realloc(p,6*sizeof(int));
 scanf("%d",&p[5]);
 for(int i=0;i<6;i++)
 printf("%d",p[i]);
 system("pause");
 return 0;      
}
