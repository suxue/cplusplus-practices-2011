#include<stdio.h>
#include<conio.h>
#include<string.h> 
#include<malloc.h>
//定义结点
typedef struct node
{
  char data;
  struct node *next;                      
}*nodeptr;


//创建一个链表
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

//插入元素
void insert(nodeptr L,char m,int n)
{
    nodeptr p;//寻找要插入的位置 
    p=(node *)malloc(sizeof(node));
    p=L;
    for(int i=1;i<n;i++)
    p=p->next;
    nodeptr temp;//插入元素 
    temp=(node *)malloc(sizeof(node));
    temp->data=m;
    temp->next=p->next;
    p->next=temp;                          
} 


//删除元素
void Delete(nodeptr L,int n)
{
  nodeptr temp;//寻找要删除的位置 
  temp=(node *)malloc(sizeof(node));
  temp=L;
  for(int i=0;i<n-1;i++)
  temp=temp->next;               
  //删除元素
  nodeptr p1,p2;
  p1=temp->next;
  p2=temp;
  p2->next=p1->next;
  free(p1);
} 


void print(nodeptr L)//打印链表 
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

void freeall(nodeptr L)//删除整张链表 
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
