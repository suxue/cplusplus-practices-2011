#define LEN sizeof(struct tree)
#define NULL 0
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>

struct tree
{
  char data;
  struct tree *lchild,*rchild;                          
};


struct tree *creat()
{
  char c;
  struct tree *t;
  c=getch();
  if(c==' ')
  t=NULL;
  else
  {
   t=(struct tree *)malloc(LEN);
   t->data=c;
   t->lchild=creat();
   t->rchild=creat();                                                      
  }
  return t;
}


void print(struct tree *t)
{
  if(t!=NULL)
  {
   printf("%c->",t->data);
   print(t->lchild);
   print(t->rchild);
  }                        
}

int main()
{
  struct tree *t;
  t=creat();
  print(t);
  printf("\n");
  getch();
  return 0;                     
}
