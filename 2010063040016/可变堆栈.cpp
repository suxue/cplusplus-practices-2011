#include<iostream.h>
class node
{
	public:
	node *pre;
	int x;
	node *next;
	public:
	node()
	{
		pre=NULL;
		next=NULL;
		x=0;
	}
	node* create()
	{
		node *start,*p;
		start=new node;
		p=start;
		return start;
	}
	void add(node* st,int value)//输入头结点，在链表末尾添加节点。 
	{
		node *p=st;
		for(;p->next!=NULL;p=p->next)
		{}
		node *q=new node;
		q->x=value;
		p->next=q;
		q->pre=p;
		q->next=NULL;
		p=p->next;
	}
	int del(node* st)//输入头结点，在链表末尾删除节点
	{
	  node *p;
	  p=st;
	  while(p->next!=NULL)  p=p->next;
	  int temp=p->x;
	  p=p->pre;
	  delete p->next;
	  p->next=NULL;	
	  return temp;
	}
	bool judge(node *st)//输入头结点，判断是否为空。
	{
		if(st->next==NULL)  return true;
		else  return false;
	} 
};
class stake
{
	private:
	int x;
	node *head;
	node n1;
	public:
	stake()
	{
		head=n1.create();
		x=0;
	}
	void push(int value)
	{
		n1.add(head,value);
	}
	int pop()
	{
		int b=n1.del(head);
		return b;
	}
	void  isEmpty()
	{
	   bool b=n1.judge(head);
	   if(b==1)  cout<<"the stake is empty\n";
	   else  cout<<"the stake is not empty\n";
	   
	}
};
using namespace std;
int main()
{
	stake S;
	S.push(1);
	S.push(100);
	int a=S.pop();
	cout<<a<<endl;
	S.isEmpty();
	a=S.pop();
	cout<<a<<endl;
	S.isEmpty();
	return 0;
}