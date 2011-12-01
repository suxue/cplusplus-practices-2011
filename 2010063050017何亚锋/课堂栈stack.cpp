//============================================================================
// Name        : øŒÃ√’ªstack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstdlib>
using namespace std;
template<class T>
class Stack{
private:
	int size;
	int top;
	T *space;
public:
	Stack(int=10);
	~Stack(){
		delete [] space;
	}
	void push(const T&);
	T pop(){
		if(!IsEmpty()){
		return space[top--];
		}
		else{
			cout<<"’ª“—ø’£°"<<endl;exit(1);
		}
	}
	bool IsEmpty()const{
		return top==-1;
	}
	bool IsFull()const{
		return top==size;
	}
};
template <class T>
Stack<T>::Stack(int size){
	this->size=size;
	space=new T[size];
	top=0;
}
template<class T>
void Stack<T>::push(const T&element){
		space[top++]=element;
}

int main() {
	Stack<int>s(10);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	while(!s.IsEmpty()){
		cout<<s.pop()<<endl;

	}
	return 0;
}
