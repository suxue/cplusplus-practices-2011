// ��ҵ��3��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
int main(void){
	int m,n,l;
	cout<<"�����������������·�̾��룺"<<endl;
	cin>>m>>l;
	l=l/1000;
	n=(m-0.01)/15;
	switch(n)
	{
	case(0): cout<<"���ʣ�5"<<endl;break;
		case(1): cout<<"���ʣ�9"<<endl;break;
			case(2): cout<<"���ʣ�12"<<endl;break;
				case(3): cout<<"���ʣ�"<<14+l<<endl;break;
					default: cout<<"���ʣ�"<<15+l<<endl;break;
	}
}

	    
