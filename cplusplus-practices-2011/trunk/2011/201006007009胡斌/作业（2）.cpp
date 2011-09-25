// 作业（2）.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include"iostream"
using namespace std;
int main(void){
	int i;
	
	for(i=65;i<=90;i++){
		char j=(char) i;
		cout<<j;
	}
	cout<<endl;
	for(i=90;i>=65;i--){
		char j=(char) i;
		cout<<j;
	}
	cout<<endl;

}