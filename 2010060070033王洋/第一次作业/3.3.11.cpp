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
	cout<<"请输入包裹重量（克）：";
	cin>>weight;
	while(weight<1)
	{
		cout<<"包裹重量有误，请重新输入包裹重量（克）：";
		cin>>weight;
	}
	if(weight>45)
	{
		cout<<"请输入邮寄距离（千公里）：";
		cin>>distance;
		while(distance<0)
		{
		    cout<<"邮寄距离有误，请重新输入邮寄距离（千公里）：";
			cin>>distance;
		}
	}
	if(weight<=45)
	{
		cout<<"资费已确定，无需输入邮寄距离。";
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
	cout<<"您需要支付的邮费为："<<expense<<endl;
	return 0;
}
