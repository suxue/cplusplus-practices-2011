#include<stdio.h>
#include<conio.h>
#include<string.h> 
#include<malloc.h>
//������
typedef struct node
{
  char data;
  struct node *next;                      
}*nodeptr;


//����һ������
/*node * createlist()
{
  char ch;
  nodeptr head,p;
  head=(node *)malloc(sizeof(node));
  head->next=NULL;
  p=head;
  while(1)
  {
    //ch=getchar();
    //putchar(ch);
    scanf("%c",&ch);
    //printf("%c",ch);
    if(ch!=' ')
    {
         p=(node *)malloc(sizeof(node));
         p->data=ch;
         printf("%c",p->data);   
         p=p->next;                          
    }              
    else 
     break;                
  }       
  return head;                                   
} */
node * create()
{
  char c;
  nodeptr head;
  c=getchar();
  if(c==' ')
  head=NULL;
  else
  {
    head=(node *)malloc(sizeof(node));
    head->data=c;
    head->next=create();                                               
  }                     
  return head;                            
}

//����Ԫ��
void insert(nodeptr L,char m,int n)
{
    nodeptr p;//Ѱ��Ҫ�����λ�� 
    p=(node *)malloc(sizeof(node));
    p=L;
    for(int i=1;i<n;i++)
    p=p->next;
    nodeptr temp;//����Ԫ�� 
    temp=(node *)malloc(sizeof(node));
    temp->data=m;
    temp->next=p->next;
    p->next=temp;                          
} 


//ɾ��Ԫ��
void Delete(nodeptr L,int n)
{
  nodeptr temp;//Ѱ��Ҫɾ����λ�� 
  temp=(node *)malloc(sizeof(node));
  temp=L;
  for(int i=0;i<n-1;i++)
  temp=temp->next;               
  //ɾ��Ԫ��
  nodeptr p1,p2;
  p1=temp->next;
  p2=temp;
  p2->next=p1->next;
  free(p1);
} 


void print(nodeptr L)//��ӡ���� 
{
  //printf("now is print");
  if(L!=NULL)
  {
  printf("%c->",L->data);
  print(L->next);
  }
   else 
   return ;
  /*nodeptr p;
  p=L;
  while(1)
  {
   printf("%c",p->data);
   p=p->next;                           
  } */                               
}

void freeall(nodeptr L)//ɾ���������� 
{
  if(L==NULL)
  return ;
  else
  {
    freeall(L->next);
    free(L);                                        
  }                  
}


int main()
{
  nodeptr head;
  head=create();
  print(head);
  insert(head,'m',1);
  printf("\n");
  print(head);
  Delete(head,1);
  print(head);
  freeall(head);
  print(head);
  getch();
  return 0;                                                    
}
