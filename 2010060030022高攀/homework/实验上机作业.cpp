#include <iostream>
using namespace std;

 struct l
{
   int i;
   struct l *next;    
};

int y=0;

int  push(struct l *p,struct l *head,struct l *s)
{
     int a;
      s=(struct l*)malloc(sizeof(struct l));             
      cin>>s->i;
      while (s->i!=0)
      {
            y++;
      head->next=s;
      s->next=p;
      p=s;
       s=(struct l*)malloc(sizeof(struct l));             
      cin>>s->i;
      }              
}

void pop(struct l *s,struct l *head)
{
     int a;
      s=head->next;
  for (a=0;a<y;a++)
   {
     cout<<s->i<<" ";
     s=s->next;
   } 
   
}

int main()
{
  int a,b,c;
  struct l *p,*head,*s;
  
  p=(struct l*)malloc(sizeof(struct l)); 
  head=(struct l*)malloc(sizeof(struct l)); 
  head->next=p;
  
  push(p,head,s);
  pop(s,head);
  
  cin>>c; 
}
