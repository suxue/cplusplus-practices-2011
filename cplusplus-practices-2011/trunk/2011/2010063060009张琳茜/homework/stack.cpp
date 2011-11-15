#include<iostream>
using namespace std;

typedef struct node
{
	int n;
	struct node *next;
}node,*nodePtr;

class Stack
{
  private:
    nodePtr head;
  public:
    Stack()
    {
    	head=(nodePtr)new(struct node);
    	head->next=NULL;
    }
    void push(int n);
    int pop();
    bool isEmpty();
    ~Stack()
    {
    	if(head->next==NULL)
    	  delete head;
    }
  
};

void Stack::push(int n)
{
	nodePtr p=(nodePtr)new(struct node);
	p->n=n;
	p->next=head->next;
	head->next=p;
}
int Stack::pop()
{
	nodePtr p=head->next;
	head->next=p->next;
	cout<<"pop the number:"<<p->n<<endl;
	return p->n;
	delete p;
}

bool Stack::isEmpty()
{
	if(head->next==NULL)
	  return true;
    else 
	  return false;
}

int main()
{
   	Stack stack;
   	//cout<<"push in the stack:"<<endl;
   	stack.push(100);
   	stack.push(200);
   	stack.push(300);
   	//stack.push(100);
   	//stack.push(100);
   	stack.pop();
   	stack.pop();
   	stack.pop();
   	//stack.pop();
   	//stack.pop();
   	if(stack.isEmpty())
   	  cout<<"the sack is empty.";
   system("pause");
}
