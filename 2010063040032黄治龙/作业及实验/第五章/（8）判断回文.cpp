//============================================================================
// Name        : C++5�ڰ���.cpp
// Author      : log
// Description : ��дһ�γ����ж������һ���ַ��Ƿ�Ϊ�����ġ�
// Detail	   : ���ݽṹΪ��ջ
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
			cout<<"���ַ������ǻ���"<<endl;
			break;
		}
		else p++;
		if(S.top==S.bottom){
			cout<<"���ַ����ǻ���"<<endl;
		}
	}
}

int main() {
	SqStack S;
	SElemStack *q,st[100],x;
	int flag=1;
	while(flag){
		cout<<"������һ���ַ�"<<endl;
		gets(st);
		q=st;
		if(InitStack(S)){
			while(*q){
				Push(S,*q++);
			}
			Compare(S,st);
		}
		else cout<<"��ʼ��ʧ��"<<endl;
		cout<<"�Ƿ������֤?������(Y/N)����(y/n)ѡ��";
		cin>>x;
		if(x=='N'||x=='n') flag=0;
	}
	return 0;
}











