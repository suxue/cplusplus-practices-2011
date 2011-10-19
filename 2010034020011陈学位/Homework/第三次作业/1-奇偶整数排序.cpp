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

bool cmp(int a,int b)
{
	if(a%2!=b%2)return a%2>b%2;
	return a<b;
}
int main(int argc, char *argv[])
{
	int a[10];
	const int n=10;
	cout<<"input 10 numbers:\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
