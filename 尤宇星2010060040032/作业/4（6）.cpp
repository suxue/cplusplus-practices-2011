#include <iostream>
using namespace std;
long fun(int n)
{
	if(n==1)
	return 1;
	else
	return 2*n-1+fun(n-1);
} 
int main()
{
	int n;
	cout<<"input n"<<endl;
	cin>>n;
	cout<<"被求表达式结果为："<<"\n"<<fun(n)<<endl;
	return 0;
}
