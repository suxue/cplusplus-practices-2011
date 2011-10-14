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

int power(int x,int y)
{
	if(y==0)return 1;
	else return x*power(x,y-1);
}

int main(int argc, char *argv[])
{
	int x,y;
	while(true)
	{
		cin>>x>>y;
		if(x==0)break;
		cout<<power(x,y)<<endl;
	}
	
	return 0;
}