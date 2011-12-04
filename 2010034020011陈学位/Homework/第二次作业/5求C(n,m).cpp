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
	if(n+n>m)n=m-n;
	if(n==0)return 1;
	if(n==1)return m;
	return C(n-1,m-1)+C(n,m-1);
}
int main(int argc, char *argv[])
{
	while(true)
	{
		cout<<"input n m to calculate C(n,m): end with input m=0\n";
		int n,m;
		cin>>n>>m;
		if(m==0)break;
		cout<<"C(n,m)="<<C(n,m)<<endl;
	}
	return 0;
}
