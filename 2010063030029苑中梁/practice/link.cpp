#include <iostream>
using namespace std;

typedef struct node{
   // ּ�ڽ����ڵ�Ľṹ���ָ��
    char data;
   struct node*next;
 }ListNode,* ListNodePtr;
void  List_Init( ListNodePtr L)  {
      //��ʼ������ͷ���
       L=new ListNode;
       L->next=NULL;
}
void CreatList_L( ListNodePtr L,int x)  {
      //��Ԫ��һһ���뵽����ͷ����
       List_Init(L);
       ListNode *m,*n;
       m=L;
       for(int i=0;i<x;i++)  {
              n=new ListNode;
              cin>>n->data;
              n->next=NULL;
              m->next=n;
              m=n;
   }
}
char List_seek(ListNodePtr  L,int pos){
   //Ѱ��������ĳ��λ�õ������㷨
    ListNodePtr p=L->next;
    for(int i=1;i<pos;i++){
            p=p->next;}
cout<<"������Ԫ��Ϊ"<<endl;
cout<<p->data<<endl;
return(p->data);
}
void List_insert( ListNodePtr L,int pos,char intSert){
     //�����㷨
     ListNodePtr p,s;
     p=L->next;
     for(int i=1;i<pos-1;i++){p=p->next;}
     s=new ListNode;
     if(s){
     s->data=intSert;
     s->next=p->next;
     p->next=s;}
     else
     cout<<"error"<<endl;
     cout<<"�����Ľ��Ϊ"<<endl;
     p=L;
 while(p){
 cout<<(p->data);
 p=p->next;}
cout<<endl;
}

void List_remove(ListNodePtr L,int pos){
//ɾ���㷨
 ListNodePtr p,q;
 p=L->next;
 for(int i=1;i<pos-1;i++){p=p->next;}
 if(p->next)
    q=p->next;
    p->next=q->next;
    delete(q);
 cout<<"ɾ����Ľ��Ϊ"<<endl;
 p=L;
 while(p){
 cout<<(p->data);
 p=p->next;}
 }

void List_Delete_List(ListNodePtr L){
     //����������Ԫ��ȫ��ɾ��
      ListNodePtr p=L,q=p->next;
      while(q){
      p->next=q->next;
      delete(q);
      q=p->next;}
    }
int main(){
//����������
cout<<"������������Ԫ��"<<endl;
ListNodePtr L;
CreatList_L( L,6);
List_seek(L,3);
List_insert(L,3,'e');
List_remove(L,3);
List_Delete_List(L);
return 0;
}

