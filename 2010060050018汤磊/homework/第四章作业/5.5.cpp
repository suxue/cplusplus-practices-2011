#include<iostream>
using namespace std;
long Fun(int m,int n)
{
	if(m==n||n==0)
	return 1;
	else
	return m*Fun(m-1,n)/(m-n);
	
}
int main()
{
	int x;int y;
	cout<<"请输入m的值:"<<endl;
	cin>>x;
	cout<<"请输入n的值:";
	cin>>y;
	cout<<"所求的值为:"<<Fun(x,y)<<endl;
}