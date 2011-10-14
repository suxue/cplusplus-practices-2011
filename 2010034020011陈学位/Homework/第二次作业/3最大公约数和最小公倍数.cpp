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
long long gcd(long long n,long long m)
{
	return m==0?n:gcd(m,n%m);
}
int main(int argc, char *argv[])
{
	while(true)
	{
		long long n,m;
		cout<<"input 2 numbers and get the gcd and the least common factor: end with input 0 0\n";
		cin>>n>>m;
		if(n<m)swap(n,m);
		cout<<"the GCD = "<<gcd(n,m)<<endl;
		cout<<"the LCM = "<<n*m/gcd(n,m)<<endl;
		cout<<endl;
	}
	cout<<"exited\n";
	return 0;
}