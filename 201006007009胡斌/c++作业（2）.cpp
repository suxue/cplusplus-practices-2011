// c++��ҵ��2��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
#include"iomanip"
using namespace std;
void main(){
	cout<<"����ַ����ǣ�";
	int i=1;
	char a[10];
	do{
		cin>>a;
		if(*a){
			cout<<a<<endl;
		}
	}while(*a&&i++<10);
	string str=a;
	char s[]="str";
	cout<<"str="<<s;
	/*cout<<i;
if(i%2!=0) cout<<"error"<<endl;
else{
	int c=0,b=0;
	b=i;
	for(int j=0;j<=(i/2);j++){
		if(*(a+c++)==*(a+b--)) continue;
		else cout<<"���ǻ���"<<endl;
		cout<<"�ǻ���"<<endl;}
}
}*/
