#include<iostream>
using namespace std;
int main()
{
	int a;
	for(a=100;a<=200;a++)
	{
		if((a%3!=0)&&(a%7!=0))
		{
			cout<<a<<endl;
		}
	}
	return 0;
} 