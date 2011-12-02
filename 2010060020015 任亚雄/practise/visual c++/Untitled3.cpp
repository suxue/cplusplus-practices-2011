#include<stdio.h>
#include<conio.h>
#define N 10
#define MAXLED 20

void SeqSearch()
{
  int a[N],i,x,y;
  printf("\n\t\t建立一个整数的顺序表（一回车为间隔，以-1结束）:\n");
  for(i=1;i<MAXLED;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]==-1)
    {
     y=i;
     break;                                                               
    }                                                                 
  }        
  
  printf("输入你要查找的数据:\n");
  scanf("%d",&x);
  i=y-1;
  a[0]=x;
  while(a[i]!=x)
  i--;
  if(i==0)
  printf("没有找到\n");
  else
  printf("已找到，在第%d的位置上\n",i);              
}


int main()
{
  SeqSearch();
  getch();
  return 1;                                                     
}
