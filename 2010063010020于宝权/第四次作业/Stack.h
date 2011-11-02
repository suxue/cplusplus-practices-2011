/*
 * File:   Stack.h
 * Author: DELL
 *
 * Created on 2011年10月21日, 下午4:46
 */

#ifndef STACK_H
#define	STACK_H



#endif	/* STACK_H */

class Stack {
public:

    Stack(int n);
    ~Stack();
    void push(int n);
    int pop() ;

    int *stack;
    bool isEmpty;
    bool isFull;
private:
    //int *sp;
    int number;
    int total;

};
