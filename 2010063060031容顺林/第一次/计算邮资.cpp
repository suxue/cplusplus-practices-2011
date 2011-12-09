#include<iostream>
using namespace std;
int main()
{    int i;
	float wei,dis,cost;
	cout<<"请输入包裹重量和邮寄距离"<<endl; 
	cin>>wei>>dis;
	if(wei>0&&wei<=15)
	cout<<"邮资是 "<<"5元";
	if(wei>15&&wei<=30)
	cout<<"邮资是 "<<"9元";
	if(wei>30&&wei<=45)
	cout<<"邮资是 "<<"12元";
	if(wei>45&&wei<=60)
	{
		if(dis>1000)
		{
			i=int(dis/1000);
			i=14+i;
			cout<<"邮资是"<<i<<"元"; 
		}
		else
			cout<<"邮资是 "<<"14元";
	}
	if(wei>60)
	{
	
			if(dis>1000)
		{
			i=int(dis/1000);
			i=15+i;
			cout<<"邮资是"<<i<<"元"; 
		}
		else
			cout<<"邮资是 "<<"15元";
	}
	
	
} 
