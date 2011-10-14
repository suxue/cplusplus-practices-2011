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
int C(int n,int m)
{
	double ans=1;
	if(m-n<m)n=m-n;
	for(int i=1;i<=n;i++)
	{
		ans*=(m*1.0/i);
		m--;
	}
	return (int)ans;
}
int main(int argc, char *argv[])
{
	while(true)
	{
		cout<<"input n m to calculate C(n,m): end with input 0 0\n";
		int n,m;
		cin>>n>>m;
		cout<<"C(n,m)="<<C(n,m)<<endl;
	}
	return 0;
}