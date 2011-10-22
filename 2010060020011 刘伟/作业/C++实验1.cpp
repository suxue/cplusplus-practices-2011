
#include<iostream>
using namespace std;
class Stack  
{
	struct stack
	{
		int a;
		stack *next;
	};
public:
	int count;
	stack *p,*P1;
	Stack()
	{
		count=0;
		p=new stack;
		p->next=NULL;
	};

	void push(int n){
		stack *p1;
		p1=new stack;
		p1->a=n;
		p1->next=p->next;
		p->next=p1;
		count++;
	}
	int pop(){
		stack *p2;
		p2=p->next;
		p->next=p->next->next;
		count--;
		return p2->a;
		
	}
	bool isEmpty()
	{
		return count==0;
	}
	

};

#include <iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
	int n,m,i,t1,t2;
	Stack MyStack;
cout<<"put the number you want to push:";
    cin>>i;
	t1=clock();
	cout<<t1<<endl;
	for(int a=1;a<=i;a++)
	{
	//cout<<"put the"<<a<<" number:";
    //cin>>n;
	MyStack.push(a);
	}
	t2=clock();
	cout<<t2-t1<<endl;
	cout<<"put the number you want to pop:";
	cin>>m;
	for(;m>0;m--)
	{
	cout<<MyStack.pop()<<endl;
	}
	cout<<MyStack.isEmpty()<<endl;
	system("pause"); 
	return 0;
}

