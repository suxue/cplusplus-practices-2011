#include<stdio.h>
#include<stdlib.h>

typedef struct LNODE
{
  int date;
  struct LNODE *next;                      
}LNode,*Linklist;

//��ӡ�б�
void print_list(Linklist L)
{
       LNode *p;
       printf("�����ĵ�����Ϊ��\n");
         p=L->next;
       while(p!=NULL)
       {
          printf("%d\t",p->date);
          p=p->next;                             
       }          
       printf("\n");
} 


//������������Ԫ�أ�������ͷ��������
void creat_list(LNode *L)
{
  Linklist p;
  p=(Linklist)malloc(sizeof(LNode));
  L=p;
  L->next=NULL;
  printf("�����������Ԫ�ذ�ctrl+z����\n");
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
