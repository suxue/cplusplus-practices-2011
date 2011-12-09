#include<iostream>
using   namespace  std;
int main()
{
	float  a,b,c;
	cout<<"请输入包裹重量以及邮寄距离：";
	cin>>a>>b;
	if(a<=15)
	c=5;
	if(a>15&&a<=30) 
	c=9;
	if(a>30&&a<=45)
	c=12;
	if(a>45&&a<=60)
	c=14+int(b/1000);
	if(a>60)
	c=15+int(b/1000);
	cout<< "邮资为："<<c<<endl;
}