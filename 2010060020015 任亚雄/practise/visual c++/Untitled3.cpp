#include<stdio.h>
#include<conio.h>
#define N 10
#define MAXLED 20

void SeqSearch()
{
  int a[N],i,x,y;
  printf("\n\t\t����һ��������˳���һ�س�Ϊ�������-1������:\n");
  for(i=1;i<MAXLED;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]==-1)
    {
     y=i;
     break;                                                               
    }                                                                 
  }        
  
  printf("������Ҫ���ҵ�����:\n");
  scanf("%d",&x);
  i=y-1;
  a[0]=x;
  while(a[i]!=x)
  i--;
  if(i==0)
  printf("û���ҵ�\n");
  else
  printf("���ҵ����ڵ�%d��λ����\n",i);              
}


int main()
{
  SeqSearch();
  getch();
  return 1;                                                     
}
