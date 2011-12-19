//============================================================================
// Name        : 11.cpp
// Author      : 任志忠 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int w,d,e;
	cout<<"请输入包裹重量（克）：";
	cin>>w;
	while(w<1)
	{
		cout<<"输入包裹的重量有误，请重新输入包裹重量（克）：";
		cin>>w;
	}
	if(w>45)
	{
		cout<<"请输入邮寄距离（千公里）：";
		cin>>d;
		while(d<0)
		{
		    cout<<"输入邮寄的距离有误，请重新输入邮寄距离（千公里）：";
			cin>>d;
		}
	}
	if(w<=45)
	{
		cout<<"资费已确定，无需输入邮寄距离。";
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
	cout<<"您总共需要支付的邮费为："<<e<<endl;
	return 0;
}
