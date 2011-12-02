#include<stdio.h>
#include<stdlib.h>
int main()
{
  int grade[100],i;
  for(i=0;i<100;i++)
  grade[i]=i;
  printf("input what grade you want to search\n");
  int temp;
  scanf("%d",&temp);
  for(i=0;i<100;i++)
    {
     if(grade[i]==temp)
     {
        printf("%d",i);
        break;
      }                       
    }            
    if(i>=100)
    printf("no found!\n");
    system("pause");
    return 0;
}
