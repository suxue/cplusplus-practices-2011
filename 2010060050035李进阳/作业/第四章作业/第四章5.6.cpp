#include<iostream>
using namespace std;
long Fun(int n)
{
	if (n==1)
	 return 1;
	else
	  return 2*n-1+Fun(n-1);
}
int main()
{
	int x;
	cout<<"please input n:";
	cin>>x;
	cout<<"the answer is :"<<Fun(x)<<endl; 
}