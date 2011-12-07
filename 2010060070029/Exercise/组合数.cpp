#include<iostream>
using namespace std;
int fac(int n)
{
	int t;
	if(1==n)
	   t=1;
	else
	   t=n*fac(n-1);   
    return t;
}
long pailie(int a,int b)
{
	long result;
	result=fac(a)/(fac(a-b)*fac(b));
    return result;
}
int main()
{
	float m,n;
	cin>>m>>n;
	cout<<pailie(m,n)<<endl;
	return 0;
}