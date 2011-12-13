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
	cout<<"input m"<<endl; 
	cin>>m;
	cout<<"input n"<<endl;
	cin>>n;
	if(m<n)
	cout<<"error"<<"\n"<<"m>=n方符合条件" <<endl;
	else 
	cout<<"c(m,n)="<<fun(m,n)<<endl;
	return 0;
}
