#include<iostream>
using namespace std;
int main()
{
int z,j,yz; 
cout<<"请输入包裹重量以及邮寄距离:\n";
cin>>z>>j;
if(z<=15)
{
	cout<<"该包裹的邮资为："<<5;
}
else if(z<=30)
{
	cout<<"该包裹的邮资为："<<9;
}
else if(z<=45)
{
	cout<<"该包裹的邮资为："<<12;
}
else if(z<=60)
{
	
	cout<<"该包裹的邮资为："<<14+j/1000;
}
else
{
	
	cout<<"该包裹的邮资为："<<15+j/1000;
}
cout<<"\n";
return 0;
}
