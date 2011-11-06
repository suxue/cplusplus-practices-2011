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
		node *start=new node;
		return start;
	}
	void add(node* st,int value)//add a node at the end of the line
	{
		node *p=st;
		while(p->next!=NULL)  p=p->next;
		node *q=new node;
		q->x=value;
		p->next=q;
		q->pre=p;
	}
	void del(node* st)//delete the last node of the line
	{
	  node *p;
	  p=st;
	  while(p->next!=NULL)  p=p->next;
	  cout<<p->x<<endl;
	  p=p->pre;
	  delete p->next;
	  p->next=NULL;	
	}
	bool judge(node *st)//if the line is empty,return 1
	{
		if(st->next==NULL)  return 1;
		else  return 0;
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
	}
	void push(int value)
	{
		n1.add(head,value);
	}
	void pop()
	{
		n1.del(head);
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
	S.push(100);
	S.push(200);
	S.push(300);
	S.pop();
	S.isEmpty();
    S.pop();
	S.isEmpty();
	S.pop();
	S.isEmpty();
	return 0;
}