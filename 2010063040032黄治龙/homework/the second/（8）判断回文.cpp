//============================================================================
// Name        : C++5第八题.cpp
// Author      : log
// Description : 编写一段程序，判断输入的一串字符是否为“回文”
// Detail	   : 数据结构为：栈
//============================================================================

#include <iostream>
#include <malloc.h>
#include<malloc.h>
#include<stdio.h>
#include<string.h>
#include<process.h>

#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
#define OK 1
#define error 0

typedef int Status;
typedef char SElemStack;

using namespace std;

typedef struct{
	int stacksize;
	SElemStack *bottom;
	SElemStack *top;
}SqStack;

Status InitStack(SqStack &S){
	S.bottom=(SElemStack *)malloc(STACK_INIT_SIZE * sizeof(SElemStack));
	if(!S.bottom) exit(0);
	S.top=S.bottom;
	S.stacksize=STACK_INIT_SIZE;
	return OK;
}

Status Push(SqStack &S,SElemStack e){
	if(S.top-S.bottom>=S.stacksize){
		S.bottom=(SElemStack *)realloc(S.bottom,(S.stacksize+STACKINCREMENT) * sizeof(SElemStack));
	if(!S.bottom) exit(0);
	S.top=S.bottom+S.stacksize;
	S.stacksize+=STACKINCREMENT;
	}
	*S.top++=e;
	return OK;
}

Status Pop(SqStack &S,SElemStack &e){
	if(S.bottom==S.top) return error;
	e=*--S.top;
	return OK;
}

void Compare(SqStack S,SElemStack Str[]){
	SElemStack a,*p=&Str[0];
	while(S.top!=S.bottom){
		Pop(S,a);
		if(*p!=a){
			cout<<"该字符串不是回文"<<endl;
			break;
		}
		else p++;
		if(S.top==S.bottom){
			cout<<"该字符串是回文"<<endl;
		}
	}
}

int main() {
	SqStack S;
	SElemStack *q,st[100],x;
	int flag=1;
	while(flag){
		cout<<"请输入一串字符"<<endl;
		gets(st);
		q=st;
		if(InitStack(S)){
			while(*q){
				Push(S,*q++);
			}
			Compare(S,st);
		}
		else cout<<"初始化失败"<<endl;
		cout<<"是否继续验证?请输入(Y/N)或者(y/n)选择：";
		cin>>x;
		if(x=='N'||x=='n') flag=0;
	}
	return 0;
}











