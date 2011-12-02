#include <stdio.h>
#include <stdlib.h>
typedef struct Node
   {
    char data;
    struct Node * next;
    }JD;
     void output(Node*head){
           Node *p=head->next;
           while(NULL!=p)
           {
               printf("%c",p->data);
               p=p->next;          
                         }
           } 
Node * creat()
   {
   char ndata;
   int i;
   Node * head = NULL , *p=NULL ;
   head=(Node*)malloc(sizeof(Node));
   head->next=NULL;
   p=head;
   for(i=1;i<7;i++)
   {
           Node *s;
           s = (Node*)malloc(sizeof(Node));
           printf("请输入数据\n");
           scanf("%c",&ndata);
           s->data=ndata;
           printf("输入的是：%c\n",s->data);
           s->next=p->next;
           p->next=s;
   }
            
return head;    
   
}   
    
    char reterieve(Node * head,int s)
  {
        Node *p;
        char elem;
        p=(Node *)malloc(sizeof(Node));
        p=head->next; 
         int i = 0;
         while(p&&i<s)
         {
         i++;
         p=p->next;    
         }
         if(p&&i==s)
         {
          elem=p->data;         
          }   
           return elem;
         } 
          Node * insert(Node * head,int b,char pre)
  {
        Node *p,*s;
        p=(Node *)malloc(sizeof(Node));
        p=head->next;
        p=p->next;
         int i = 0;
         pre='e';
         while(p&&i<b)
         {
          i++;      
         p=p->next;   
         }
         if(p&&i==b)
         {
                s=(Node*)malloc(sizeof(Node));
                s->data=pre;
                s->next=p->next;
                p->next=s;
          }
          
             
          return head;
          }
          
          Node * remove(Node * head,int g)
          {
                Node *p,*s;
        //p=(Node *)malloc(sizeof(Node));
        p=head->next; 
        s=NULL;
        p=p->next;
         int i = 0;
         while(p&&i<g)
         {
         i++;
         p=p->next;    
         }
         if(p&&i==g)
         {
                s=p;               
                s=p->next;
                p->next=s->next;
                free(s);
               
               
          }
          return head;
               }
               
         int main()
         {
             Node * head;
             int s;
             int b; 
             int g;
             char elem;char pre;
             head=creat();
             printf("输入你想查找的第几个数\n");
             scanf("%d",&s);
             elem=reterieve(head,s); 
             printf("%c\n",elem);
             head=insert(head,b,pre) ;
             printf("输入你想插入的第几个数\n");
             scanf("%d",&b);
             output(head);
             printf("\n请输入想要删除第几个元素\n");
             scanf("%d",&g);
             head=remove(head,g);
             output(head); 
             system("pause");
             return 0;
         }
