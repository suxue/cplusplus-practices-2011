#include <iostream>
using namespace std;
long fun(int m,int n)
{
	if(m==n||n==0)
	return 1;
	else
	return m*fun(m-1,n)/(m-n);
}



int main()
{
	int m,n;
	cout<<"Please input m,n:";
	cin>>m>>n;
	cout<<"c(m,n="<<fun(m,n)<<endl;
	return 0;
}