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
	cout<<"������m��ֵ:"<<endl;
	cin>>x;
	cout<<"������n��ֵ:";
	cin>>y;
	cout<<"�����ֵΪ:"<<Fun(x,y)<<endl;
}