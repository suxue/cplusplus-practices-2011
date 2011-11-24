#include<iostream.h>
#include"Stack.h"

int main()
{
    Stack s1(10);
	s1.Push(3);
	cout<<s1.Pop()<<endl;
	cout<<s1.IsEmpty()<<endl;
	return 0;
}