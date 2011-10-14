#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

const double EP=1E-10;
const double PI=acos(-1);

int main(int argc, char *argv[])
{
	while(true)
	{
		cout<<"input a number  end with 0\n";
		int n;
		cin>>n;
		if(n==0)break;
		bool OK=true;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				OK=false;
				break;
			}
		}
		if(n==1)
		{
			cout<<"No meanings\n";
		}
		else if(OK)
		{
			cout<<"Is a Prime\n";
		}
		else 
		{
			cout<<"Not A Prime\n";
		}
		cout<<endl;
	}
	cout<<"exited\n";
	return 0;
}