#include<iostream>
using namespace std;
int main()
{    int i;
	float wei,dis,cost;
	cout<<"����������������ʼľ���"<<endl; 
	cin>>wei>>dis;
	if(wei>0&&wei<=15)
	cout<<"������ "<<"5Ԫ";
	if(wei>15&&wei<=30)
	cout<<"������ "<<"9Ԫ";
	if(wei>30&&wei<=45)
	cout<<"������ "<<"12Ԫ";
	if(wei>45&&wei<=60)
	{
		if(dis>1000)
		{
			i=int(dis/1000);
			i=14+i;
			cout<<"������"<<i<<"Ԫ"; 
		}
		else
			cout<<"������ "<<"14Ԫ";
	}
	if(wei>60)
	{
	
			if(dis>1000)
		{
			i=int(dis/1000);
			i=15+i;
			cout<<"������"<<i<<"Ԫ"; 
		}
		else
			cout<<"������ "<<"15Ԫ";
	}
	
	
} 
