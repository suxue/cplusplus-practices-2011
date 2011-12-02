#include<stdio.h>
#include<conio.h>
#include<malloc.h>

//定义个结点
typedef struct tree
{
  char data;
  struct tree *lchild,*rchild;                      
}*treeptr;

//创建一棵树
tree * create()
{
  treeptr L;
  char ch;
  //printf("输入结点的data\n");
  ch=getchar();
  if(ch!=' ')
  {
    L=(tree *)malloc(sizeof(tree));
    L->data=ch;
    L->lchild=create();
    L->rchild=create();                            
  }                    
  else 
  L=NULL;
  return L;                     
} 

//交换树的左右子数 
void changechild(treeptr L)
{
  if(L!=NULL)
  {
    treeptr temp;
    temp=(tree *)malloc(sizeof(tree));
    temp->lchild=L->lchild;
    L->lchild=L->rchild;
    L->rchild=temp->lchild;
    changechild(L->lchild);
    changechild(L->rchild);                      
  }                         
}

//新序遍历树
void  preorder(treeptr L)
{
  if(L!=NULL)
  {
  printf("%c",L->data);
  preorder(L->lchild);
  preorder(L->rchild);
   }                      
} 


//main 函数
int main()
{
  treeptr L;
  L=create();
  preorder(L);
  changechild(L);
  preorder(L);
  getch();
  return 0;                          
} 
