//============================================================================
// Name        : 11.cpp
// Author      : ��־�� 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int w,d,e;
	cout<<"����������������ˣ���";
	cin>>w;
	while(w<1)
	{
		cout<<"�������������������������������������ˣ���";
		cin>>w;
	}
	if(w>45)
	{
		cout<<"�������ʼľ��루ǧ�����";
		cin>>d;
		while(d<0)
		{
		    cout<<"�����ʼĵľ������������������ʼľ��루ǧ�����";
			cin>>d;
		}
	}
	if(w<=45)
	{
		cout<<"�ʷ���ȷ�������������ʼľ��롣";
		if(w<=15)
			e=5;
		else if(w>15 && w<=30)
			e=9;
		else if(w>30)
			e=12;
	}
	else if(w>45)
	{
		if(w<=60)
			e=14+d;
		else if(w>60)
			e=15+d;
	}
	cout<<"���ܹ���Ҫ֧�����ʷ�Ϊ��"<<e<<endl;
	return 0;
}
