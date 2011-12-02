#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct tree
{
 char data;
 struct tree *lchild,*rchild;                      
}*Bintree;

Bintree createtree()
{
  Bintree t;
  t=(tree *)malloc(sizeof(tree));
  char c;
  c=getchar();
  if(c==' ')
   t=NULL;
   else
   {
     t->data=c;
     t->lchild=createtree();
     t->rchild=createtree();                              
   }                        
   return t;                          
}

void preoder(Bintree t)
{
    if(t!=NULL)
    {
      printf("%c",t->data);
      preoder(t->lchild);
      preoder(t->rchild);              
    }                 
}

int main()
{
  Bintree t;
  t=createtree();
  preoder(t);
  system("pause");
  return 0;                      
}
