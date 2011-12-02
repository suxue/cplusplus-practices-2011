#include<stdio.h>
#include<stdlib.h>

typedef struct LNODE
{
  int date;
  struct LNODE *next;                      
}LNode,*Linklist;

//打印列表
void print_list(Linklist L)
{
       LNode *p;
       printf("建立的单链表为：\n");
         p=L->next;
       while(p!=NULL)
       {
          printf("%d\t",p->date);
          p=p->next;                             
       }          
       printf("\n");
} 


//逆序输入数据元素，建立带头结点的脸表
void creat_list(LNode *L)
{
  Linklist p;
  p=(Linklist)malloc(sizeof(LNode));
  L=p;
  L->next=NULL;
  printf("请输入链表的元素按ctrl+z结束\n");
  while((scanf("%d",&L->date))!=EOF)
  {
    p->next=L->next;
    L->next=p;
    p=(LNode *)malloc(sizeof(LNode));                                 
  }                         
} 


int main()
{
   LNode L;
   creat_list(&L);
   print_list(&L);
   system("pause");
   return 0;                            
}
