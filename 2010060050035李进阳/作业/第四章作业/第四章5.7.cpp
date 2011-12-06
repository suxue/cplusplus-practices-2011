#include<iostream>
using namespace std;
double Power(double x,unsigned y)
{
	if(y==0)
	return 1;
	else
	return Power(x,y-1)*x;
}
int main()
{
	int m ;
	int n;
	cout<<"please input x:"<<endl;
	cin>>m;
	cout<<"please input y:"<<endl;
	cin>>n;
	cout<<"the answer is:"<<Power(m,n)<<endl; 
}