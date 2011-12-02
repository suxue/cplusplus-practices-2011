#include<stdio.h>
#include<stdlib.h>
typedef char datatype;
typedef struct node
{
 datatype data;
 struct node *lchild,*rchild;                      
}bintnode;

typedef bintnode *bintree;

typedef struct stack
{
  bintree data[100];
  int top;                          
}seqstack;

void push(seqstack *s,bintree t)
{
  s->data[++s->top]=t;                              
}

bintree pop(seqstack *s)
{
  if(s->top!=-1)
  {
    s->top--;
    return s->data[s->top+1];                      
  }                        
  else return NULL;
}

void createbintree(bintree t)
{
 char ch;
 if((ch=getchar())==' ')
 t=NULL;
 else
 {
   t=(bintnode *)malloc(sizeof(bintnode));
   t->data=ch;
   createbintree(t->lchild);
   createbintree(t->rchild);                       
 }                           
}

void preorder1(bintree t)
{
  seqstack s;
  s.top=-1;
  while((t)||(s.top!=-1))
  {
    while(t)
    {
     printf("%c",t->data);
     s.top++;
     s.data[s.top]=t;
     t=t->lchild;                         
    }            
    if(s.top>-1)
    {
     t=pop(&s);
     t=t->rchild;                                      
    }           
  }                       
}


int main()
{
  bintree root;
  printf("请按次序读入字符：\n");
  createbintree(root);
  printf("\n非递归实现的二叉树前序遍历：");
  preorder1(root) ;
  printf("\n");
  system("pause");
  return 0;                         
}
