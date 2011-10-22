#include <iostream>
using namespace std;
const int SIZE=10000;    //can be modified to 1000 to check the *next  
struct Stack_element{
	int num[SIZE];
	Stack_element* next;
};

class Stack{
	public:
		Stack();
		bool isempty();
		Stack& push(int v);
		int top();
		int size();
		int max_size();
		void pop();
		~Stack();
	private:
		Stack_element *p,*q;
		int length;
		int row;
		int col;
		int max_length;
};

Stack::Stack(){
	length=0;
	col=1;
	row=0;
	max_length=0;
}
bool Stack::isempty(){
	return length==0;
}
Stack& Stack::push(int v){
	if(col==SIZE||isempty()){
		p=new Stack_element;
		if(!p){
		cout<<"aplly for mememry failed\n";
		return *this;
		}
		if(!isempty()){
		p->next=q;
		}
		row++;
		col%=SIZE;
		max_length+=SIZE;
		p->num[col++]=v;
		length++;
		q=p;
	}
	else {
		q->num[col++]=v;
		length++;
	}
	return *this;
}
int Stack::size(){
	return length;
}
int Stack::max_size(){
	return row*SIZE;
}
void Stack::pop(){
	if(isempty())return ;
	if(1==col&&!isempty()){
		p=q;
		q=q->next;
		delete p;
		max_length-=SIZE;
		row--;
		col=SIZE;
	}
	else {
		col--;
	}
	length--;
}
Stack::~Stack(){
	p=q;
	while(p->next!=NULL){
		q=p->next;
		delete p;
		p=q;
	}
	if(!p)delete p;
}
int Stack::top(){
	if(!isempty())return q->num[col-1];
	else cout<<"empty\n";
}

int main(int argc, char *argv[])
{
	Stack S;
	S.push(9999).push(888).push(77).push(6);
	cout<<"S.top="<<S.top()<<endl;
	cout<<"S.size="<<S.size()<<endl;
	cout<<"S.max_size="<<S.max_size()<<endl;
	for(int i=0;i<2222;i++){
		S.push(i);
	}
	while(!S.isempty()){
		cout<<"S.top="<<S.top()<<endl;
		S.pop();
	}
	return 0;
}
