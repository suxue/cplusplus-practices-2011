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
		int n;
		printf("input 1 to show the numbers;\ninput 2 to exit \n");
		scanf("%d",&n);
		if(n==1)
		{
			for(int i=100;i<=200;i++)
			{
				if(i%3!=0&&i%7!=0)
				{
					printf("%d\n",i);
				}
			}
		}
		else if(n==2)
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
