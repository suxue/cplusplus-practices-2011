#include<iostream>
#include"Stack.h"
Stack::Stack(int m=10){
                     //���캯�� 
		length=m;
	top=base=new int[length];
	for(;;)
	{if(!base) {printf("�ڴ����ʧ�ܣ��ȴ����·��䡭��\n");
		      top=base=(int *)malloc(m*sizeof(int));}
	else break;
	} 
}
	/*Stack::~Stack(){
		delete []base;
		//printf("������ɾ������\n");
	}*/
	void Stack::Push(int m){//��ջ 
		if(top-base==length) printf("ջ�������޷�����Ԫ��\n");
		else *(++top)=m;
	}
	int Stack::Pop(){  // ��ջ 
		if(top==base) printf("ջ�ѿգ�����ɾ��\n");
		else return *(top--);
	}
	int Stack::Gettop(){//����ջ��Ԫ�� 
	  if(top==base) printf("ջ�ѿգ��޷�����Ԫ��\n");
	  else return *top;	
	} 
	bool Stack::isempty(){ //�п� 
		return top==base;
	}

