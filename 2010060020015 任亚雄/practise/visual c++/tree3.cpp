#include<stdio.h>
#include<stdlib.h>
typedef char datatype;
typedef struct node
{
  datatype data;
  struct node *lchild,*rchild;                      
}bintnode;

typedef bintnode *bintree;

void createbintree(bintree *t)
{
  char ch;
  if((ch=getchar())==' ')
  *t=NULL;
  else
  {
   *t=(bintnode *)malloc(sizeof(bintnode));
   (*t)->data=ch;
   createbintree(&(*t)->lchild);
   createbintree(&(*t)->rchild);                       
  }                           
}

void  preorder(bintree t)
{
  if(t)
  {
  printf("%c",t->data);
  preorder(t->lchild);
  preorder(t->rchild);
  }                       
}

int main()
{
 bintree root;
 printf("������������ַ�:\n");
 createbintree(&root);
 printf("\n���õݹ�ʵ��ǰ�����:");
 preorder(root);
 system("pause");
 return 0;                         
}
