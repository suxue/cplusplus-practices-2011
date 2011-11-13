#include<iostream>
#include"Stack.h"
using namespace std;
int main()
{  int length,data;
  printf("请输入一个数以确定您要建立的栈的大小,若输入-1则默认大小为10\n");
  scanf("%d",&length);
  if(length==-1) {           //使用默认大小建立栈1 
  Stack S1(10);
  for(int i=0;i<10;i++)
  { scanf("%d",&data);
  	S1.Push(data);
  }
  	printf("S1所有元素出栈:\n");
		while(!S1.isempty()){
		printf("%d\t",S1.Pop());
	} 	
  }
  else{
  	Stack S1(length);   //使用自定义大小建立栈1 
   for(int i=0;i<length;i++)
  { scanf("%d",&data);
  	S1.Push(data);
  }
  printf("S1所有元素出栈:\n");
		while(!S1.isempty()){
		printf("%d\t",S1.Pop());
	} 	
  }
	printf("\n");
  Stack S2(100);   //建立栈2，元素默认1至100 
    for(int i=0;i<100;i++)
     S2.Push(i+1);

 Stack S3(S2);  //建立栈3，把栈2的内容拷贝过去 
   printf("S2所有元素出栈:\n");  
		while(!S2.isempty()){
		printf("%d\t",S2.Pop());
	} 	
   printf("\n");
 printf("S3所有元素出栈:\n");
		while(!S3.isempty()){
		printf("%d\t",S3.Pop());
	} 
	system("pause");	
} 
