#include <iostream>
using namespace std;

struct Stack_element{
	int elem;
	Stack_element* next;
};

class Stack{
	public:
		Stack();
		Stack& push(int v);    //push a element
		void pop();           //pop the top element
		int top();           //return the top element
		bool isempty();      //
		int size();          // the length of the stack
		~Stack();
	private:
    	Stack_element  *p,*q;
		int count;
};
Stack::Stack(){
	count=0;
}
int Stack::size(){
	return count;
}
bool Stack::isempty(){
	return count==0;
}

Stack& Stack::push(int v){
	p=new Stack_element;
	if(!p) {
		cout<<"full memery\n";
		return *this;     //aplly for memery failed 
	}    
	p->elem=v;
	if(!isempty()){
		p->next=q;
	}
	q=p;
	count++;
	return *this;
}

void Stack::pop(){
	if(!isempty()){
		p=q;
		q=q->next;
		delete p;
		count--;
	}
}

int Stack::top(){
	return q->elem;
}

Stack::~Stack(){
	p=q;
	while(p->next!=NULL){
		q=q->next;
		delete p;
		p=q;
	}
	delete p;
}
int main(int argc, char *argv[])
{
	Stack S;
	S.push(99999).push(2).push(5).push(7).push(12);
	cout<<"S.top="<<S.top()<<endl;
	cout<<"S.size="<<S.size()<<endl;
	while(!S.isempty()){
		cout<<"S.top="<<S.top()<<endl;
		S.pop(),cout<<"S.pop\n";
	}
	return 0;
}
