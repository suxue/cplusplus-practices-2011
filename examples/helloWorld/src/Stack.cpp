/*
 * Stack.cpp
 *
 *  Created on: 2011-10-19
 *      Author: Mark
 */

#include "Stack.h"

Stack::Stack(int size):size(size) {
	stack = new int[size];
	sp = stack;
}

Stack::~Stack(){
	delete []stack;
}

Stack& Stack::push(int in) {
	*(++sp) = in;
	return *this;
}

int Stack::pop() {
	return *sp--;
}

bool Stack::isEmpty() {
	return sp == stack;
}

