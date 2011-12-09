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
double c_to_f(double c)
{
	return (9.0*c/5+32);
}
double f_to_c(double f)
{
	return (5.0*(f-32)/9);
}
int main(int argc, char *argv[])
{
	while(true)
	{
		cout<<"input number to get into operation\n";
		cout<<"1.change C temperature to F temperature\n";
		cout<<"2.change F temperature to C temperature\n";
		cout<<"others.exit\n";
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<"input the C temperature:\n";
			double c;
			cin>>c;
			cout<<"the F temperature is:\n";
			cout<<c_to_f(c)<<endl;
		}
		else if(n==2)
		{
			cout<<"input the F temperature\n";
			double f;
			cin>>f;
			cout<<"the C temperature is:\n";
			cout<<f_to_c(f)<<endl;
		}
		else 
		{
			break;
		}
		cout<<"\n";
	}
	cout<<"exited\n";
	return 0;
}