#include<iostream.h>
#include"d:\Stack.h"

Stack::Stack(int size)
{
	data=new int[size];
	count=0;
}

void Stack::Push(int item)
{
	*(data++)=item;
	count++;
}

int Stack::Pop()
{
	return *data--;
	count--;
}

bool Stack::IsEmpty()
{
	
	return count==0;
}