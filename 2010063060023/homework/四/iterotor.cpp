#include<iostream>
using namespace std;

typedef struct Node
{
	int value;
	struct Node *next;
} Node,*Nodeptr;

class Iterator;//前向引用声明 
class Link
{
  private:
    Nodeptr head;
  public:
    Link();
    Nodeptr append(int n);
    Iterator iterator();
    friend class Iterator;
};

class Iterator
{
  private:
    Link l;
    Nodeptr r;
  public:
    Iterator();
	int hasNext();
	Node& getNode();
	void next();
};

int main()
{
	Link link;
	link.append(1);
	link.append(2);
	link.append(3);
	Iterator i=link.iterator();
	while(i.hasNext())
	{
		i.next();
		Node &node=(i.getNode());
		cout<<&node.value<<endl;
	}
	return 0;
}

Link::Link()
{
	head=(Nodeptr)new(struct Node);
	head->next;
}
Nodeptr Link::append(int n)
{
  Nodeptr p=(Nodeptr)new(struct Node);
  p->value=n;
  p->next=head->next;
  head->next=p;
  return head;
}
Iterator Link::iterator()
{	
  Iterator i;
  return i;
}

Iterator::Iterator()
{
	 r=(Nodeptr)new(struct Node);
	 r=l.head;
}
int  Iterator::hasNext()
{
  if(r->next)
    return 1;
  else return 0;
}

Node& Iterator::getNode()
{
   
   return *r;
}

void Iterator::next()
{
	r=r->next;
}
