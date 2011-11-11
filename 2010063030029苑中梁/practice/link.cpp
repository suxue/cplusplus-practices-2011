#include <iostream>
using namespace std;

typedef struct node{
   // 旨在建立节点的结构体和指针
    char data;
   struct node*next;
 }ListNode,* ListNodePtr;
void  List_Init( ListNodePtr L)  {
      //初始化链表头结点
       L=new ListNode;
       L->next=NULL;
}
void CreatList_L( ListNodePtr L,int x)  {
      //将元素一一插入到链表头结点后
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
   //寻找链表内某个位置的数据算法
    ListNodePtr p=L->next;
    for(int i=1;i<pos;i++){
            p=p->next;}
cout<<"第三个元素为"<<endl;
cout<<p->data<<endl;
return(p->data);
}
void List_insert( ListNodePtr L,int pos,char intSert){
     //插入算法
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
     cout<<"插入后的结果为"<<endl;
     p=L;
 while(p){
 cout<<(p->data);
 p=p->next;}
cout<<endl;
}

void List_remove(ListNodePtr L,int pos){
//删除算法
 ListNodePtr p,q;
 p=L->next;
 for(int i=1;i<pos-1;i++){p=p->next;}
 if(p->next)
    q=p->next;
    p->next=q->next;
    delete(q);
 cout<<"删除后的结果为"<<endl;
 p=L;
 while(p){
 cout<<(p->data);
 p=p->next;}
 }

void List_Delete_List(ListNodePtr L){
     //将整个链表元素全部删除
      ListNodePtr p=L,q=p->next;
      while(q){
      p->next=q->next;
      delete(q);
      q=p->next;}
    }
int main(){
//主函数进行
cout<<"依次输入链表元素"<<endl;
ListNodePtr L;
CreatList_L( L,6);
List_seek(L,3);
List_insert(L,3,'e');
List_remove(L,3);
List_Delete_List(L);
return 0;
}

