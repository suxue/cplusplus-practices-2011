#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
using namespace std;
typedef struct nodeTree
{
  char data;
  struct nodeTree *lchild,*rchild;                       
}*nodeTreeptr;


nodeTreeptr creat()
{
           nodeTreeptr t=(nodeTree *)malloc(sizeof(nodeTree));
           char c;
           cout<<"input the data!\n";
           cin>>c;
           t->data=c;
          cout<<c;
           if(c!=' ')
           {
             t->lchild=creat();
             t->rchild=creat();                            
           }
       return t;                                
}

void print(nodeTreeptr L)
{
  if(L->data!=' ')
             {
               printf("%c",L->data);
               print(L->lchild);
               print(L->rchild);                                   
             }                       
}

int main()
{
  nodeTreeptr L=new nodeTree[sizeof(nodeTree)];
  L=creat();
  print(L);
  getch();
  return 0;                                     
}
