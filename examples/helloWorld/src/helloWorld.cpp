//============================================================================
// Name        : helloWorld.cpp
// Author      : Mark Feng
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	Stack s;
	Stack s2(s);

	s2.push(200).push(300).push(400);

	cout << s2.pop() << endl; // prints Hello World!!!

	if (s2.isEmpty()) cout<<"Stack is Empty!"<<endl;
	return 0;
}
