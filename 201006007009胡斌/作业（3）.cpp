// 作业（3）.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
int main(void){
	int m,n,l;
	cout<<"请输入包裹的重量和路程距离："<<endl;
	cin>>m>>l;
	l=l/1000;
	n=(m-0.01)/15;
	switch(n)
	{
	case(0): cout<<"邮资：5"<<endl;break;
		case(1): cout<<"邮资：9"<<endl;break;
			case(2): cout<<"邮资：12"<<endl;break;
				case(3): cout<<"邮资："<<14+l<<endl;break;
					default: cout<<"邮资："<<15+l<<endl;break;
	}
}

	    
