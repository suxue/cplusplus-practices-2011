/*
 * Stack.h
 *
 *  Created on: 2011-10-19
 *      Author: Mark
 */

#ifndef STACK_H_
#define STACK_H_

class Stack {
public:
	Stack(int size = 100);
	Stack(Stack& source) :
			size(source.size) {
		stack = new int[size];
		sp = stack;
		for (int i = 0; i < size; ++i) {
			stack[i] = source.stack[i];
		}
	}

	~Stack();
	Stack& push(int in);
	int pop();
	bool isEmpty();
private:
	int *sp;
	int *stack;
	int size;
};

#endif /* STACK_H_ */
