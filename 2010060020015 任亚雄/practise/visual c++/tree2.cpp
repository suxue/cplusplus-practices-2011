#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct tree
{
 char data;
 struct tree *lchild,*rchild;                      
};

struct tree * creat()
{
  struct tree *t;
  char c;
  c=getchar();
  if(c==' ')
   t=NULL;
  else
  {
   t=(struct tree *)malloc(sizeof(struct tree));
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
