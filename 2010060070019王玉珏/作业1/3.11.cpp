//============================================================================
// Name        : 11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int weight,distance,expense;
	cout<<"����������������ˣ���";
	cin>>weight;
	while(weight<1)
	{
		cout<<"��������������������������������ˣ���";
		cin>>weight;
	}
	if(weight>45)
	{
		cout<<"�������ʼľ��루ǧ�����";
		cin>>distance;
		while(distance<0)
		{
		    cout<<"�ʼľ������������������ʼľ��루ǧ�����";
			cin>>distance;
		}
	}
	if(weight<=45)
	{
		cout<<"�ʷ���ȷ�������������ʼľ��롣";
		if(weight<=15)
			expense=5;
		else if(weight>15 && weight<=30)
			expense=9;
		else if(weight>30)
			expense=12;
	}
	else if(weight>45)
	{
		if(weight<=60)
			expense=14+distance;
		else if(weight>60)
			expense=15+distance;
	}
	cout<<"����Ҫ֧�����ʷ�Ϊ��"<<expense<<endl;
	return 0;
}
