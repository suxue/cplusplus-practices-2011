// 作业（1）.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include"iostream"
using namespace std;
/*int main(){
	int i=65;
	char j=(char) i;
	cout<<j;
}*/
int main(){
	int i=100;
   for(i=100;i<=200;i++){
	   if(i%3==0||i%7==0) continue;
	   cout<<"i="<<i<<endl;
   }
}

