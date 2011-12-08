#include <iostream>
using namespace std;
class Stack 
{ 
	private:
		int front, stack[100];
	public:
	Stack()
	{ 
	front = 0;
	}

	Stack push(int in)
	{ 
		stack[++front] = in; 
		return *this;
	}
	int pop()
	{ 
		return stack[front--];
	}
	bool isEmpty()
	{ 
		return front == 0;  	
	}
};
int main()
{ 
 	Stack a;
	a.push(1).push(2).push(3);
	while(!a.isEmpty())
	cout << a.pop() << endl;
}
