#include<iostream.h>
using namespace std;
class Node
{
    private:
	Node *next;
	public:
	int value;
	Node()
	{
		next=NULL;
	}
	void add(int x)
	{
		Node *q=new Node;
		q->value=x;
		q->next=NULL;
		next=q;
	}
	bool HasNext()
	{
		if(next!=NULL)  return 1;
		else  return 0;
	}
	Node* Next()
	{
		return next;
	}
};
class Iterator
{
	private:
	Node *start;
	Node *work;
	public:
	void setstart(Node* x)
	{
		start=x;
	}
	void setwork(Node* x)
	{
		work=x;
	}
	Iterator()
	{
		start=NULL;
		work=NULL;
	}
	bool hasNext()
	{
	  if(work->HasNext())  
	  return 1;
	  else  
	  return 0;
	}
	void Next()
	{
	  work=work->Next();	
	}
	Node getNode()
	{
		return *work;
	}
};
class Link
{
	private:
	Node *head;
	public:
	void append(int x)
	{
		Node *p=head;
		while(p->HasNext()) p=p->Next();
	    p->add(x);
	}
	Link()
	{
		head=new Node;
	}
	Iterator iterator()
	{
	   Iterator l;
	   l.setwork(head);
	   l.setstart(head);
	   return l;
	}
};
int main()
{
	Link link;
	link.append(1);
	link.append(2);
	link.append(3);
	link.append(4);
	link.append(4);
	link.append(5);
	Iterator i=link.iterator();
	while(i.hasNext())
	{
		i.Next();
		Node node=i.getNode();
		cout<<node.value<<endl;;
	}
	return 0;
}