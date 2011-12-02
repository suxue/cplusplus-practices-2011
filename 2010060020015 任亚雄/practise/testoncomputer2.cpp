#include<stdio.h>
#include<conio.h>
#include<malloc.h>

//��������
typedef struct tree
{
  char data;
  struct tree *lchild,*rchild;                      
}*treeptr;

//����һ����
tree * create()
{
  treeptr L;
  char ch;
  //printf("�������data\n");
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

//���������������� 
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

//���������
void  preorder(treeptr L)
{
  if(L!=NULL)
  {
  printf("%c",L->data);
  preorder(L->lchild);
  preorder(L->rchild);
   }                      
} 


//main ����
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
