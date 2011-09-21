#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	while(true) 
	{
		printf("input number to get into the operation£º\n");
		printf("1.output 26 letters in alphabetical way\n");
		printf("2.output 26 letters in inverted alphabetical way\n");
		printf("3.exit\n");
		int n;
		cin>>n;
		if(n==1)
		{
			for(char i='A';i<='Z';i++)
			{
				cout<<i<<" ";
			}
		}
		else if(n==2)
		{
			for(char i='Z';i>='A';i--)
			{
				cout<<i<<" ";
			}
		}
		else if(n==3)
		{
			break;
		}
		else 
		{
			cout<<"wrong input ,please reinput\n";
		}
		cout<<endl;
	}
	printf("exited\n");
	return 0;
}
