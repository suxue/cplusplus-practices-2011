#include <iostream>

#define STACK_INIT_SIZE 50
#define STACKINCREMENT 10

using namespace std;

typedef int ElemType;

class Stack{
private:
	int stacksize;
	ElemType* top;
	ElemType* bottom;
public:
	Stack(){
		this->bottom=(ElemType*)malloc(STACK_INIT_SIZE*sizeof(ElemType));
		if(!this->bottom)	exit(-1);
		this->top=this->bottom;
		this->stacksize=STACK_INIT_SIZE;
	}
	int Push(ElemType item){
		if(this->top-this->bottom>=this->stacksize){
			this->bottom=(ElemType*)realloc(this->bottom,(this->stacksize+STACKINCREMENT)*sizeof(ElemType));
			if(!this->bottom)	exit(-1);
			this->top=this->bottom+this->stacksize;
			this->stacksize+=STACKINCREMENT;
		}
		*(this->top)=item;
		this->top++;
		return 0;
	}
	int Pop(ElemType &e){
		if(this->top==this->bottom)	return 0;
		if(this->top-this->bottom<1/2*this->stacksize){
			this->bottom=(ElemType*)realloc(this->bottom,(this->stacksize-STACKINCREMENT)*sizeof(ElemType));
			if(!this->bottom)	exit(-1);
			this->stacksize-=STACKINCREMENT;
		}
		this->top--;
		e=*(this->top);
		return 0;
	}
	int GetTop(){
		return *(this->top-1);
	}
};

int main(){
	Stack a;
	int i,b;
	for(i=10;i>4;i--){
		a.Push(i);
		cout<<a.GetTop()<<endl;
	}
	a.Pop(b);
	cout<<b<<endl;
	for(i=100;i>0;i--){
		a.Push(i);
		cout<<a.GetTop()<<endl;
	}
	int n;
	cin>>n;
	return 0;
}