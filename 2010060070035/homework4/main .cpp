#include<iostream.h>
#include "d:\Stack.h"

int main()
{
    Stack s1(5);
	s1.Push(6);
	
	cout<<s1.Pop()<<endl;
	cout<<s1.IsEmpty()<<endl;
	return 0;
}
