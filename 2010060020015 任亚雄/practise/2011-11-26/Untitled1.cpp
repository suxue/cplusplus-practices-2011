#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
typedef struct
{
  int key;
  float info;
}JD;

int seqsrch(JD *r,int n,int k)
{
  int i=n;
  r[0].key=k;
  while(r[i].key!=k)
  i--;
  return i;                       
}
void create(JD *L)
{
  for(int i=0;i<10;i++)
   (L+i)->key=i;                                
}

int main()
{
  JD *L;
  L=new JD[sizeof(JD)*10];
  create(L);
  cout<<seqsrch(L,10,5);
  getch();
  return 0;                           
}
