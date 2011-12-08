#include <iostream>

typedef struct node{
	int data;
	struct node *next;
}StackNode,*StackNodePtr;

typedef struct stack{
	StackNodePtr top;	
} 

void Stack_Init(StackPtr *s){
	s->top = Null;
}

void Push(StackPtr s, int item){
	StackNodePtr np = new(StackNodePtr);
	np->next = s->top;
	s->top = np;
}

void Pop(StackNodePtr s , int *item){	
	StackNodePrt *np = s->next;
	*item = np->entry;
	free(np);
}

bool Stack_Empty(StackPtr s){
	return s->top == Null;
}

void main(){
	int item;
	Stack s;
	StackPtr ps = &s;
	Stack_Init(ps);
	while((item = getchar)!= '/n')
		Push(ps,item);
	while(!Stack_empty(ps)){
		Pop(ps,&item)
		cout<<item<<'t'
	}
}