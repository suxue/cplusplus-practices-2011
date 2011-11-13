#include<iostream>
#include"Stack.h"
Stack::Stack(int m=10){
                     //构造函数 
		length=m;
	top=base=new int[length];
	for(;;)
	{if(!base) {printf("内存分配失败，等待重新分配……\n");
		      top=base=(int *)malloc(m*sizeof(int));}
	else break;
	} 
}
	/*Stack::~Stack(){
		delete []base;
		//printf("对象已删除……\n");
	}*/
	void Stack::Push(int m){//入栈 
		if(top-base==length) printf("栈已满，无法插入元素\n");
		else *(++top)=m;
	}
	int Stack::Pop(){  // 出栈 
		if(top==base) printf("栈已空，不能删除\n");
		else return *(top--);
	}
	int Stack::Gettop(){//返回栈顶元素 
	  if(top==base) printf("栈已空，无法返回元素\n");
	  else return *top;	
	} 
	bool Stack::isempty(){ //判空 
		return top==base;
	}

