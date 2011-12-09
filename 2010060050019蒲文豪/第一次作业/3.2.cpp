#include<iostream>
using namespace std;
int main()
{
	int a;
	for(int i=100;i<=200;i++)
	{
	    a=1;
	  if(i%3==0&&i%7==0)	
		a=2;	
	  if(a==1)
	    cout<<i<<"\t";	
	}
}