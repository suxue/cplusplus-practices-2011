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

double get_PI(double accuracy)
{
	int mu=1;
	int z=1;
	double num=z*1.0/mu;
	while(fabs(z*1.0/mu)*4>=accuracy)
	{
		z*=-1;
		mu+=2;
		num+=(z*1.0/mu);
	}
	return num*4;
}
int main(int argc, char *argv[])
{
	while(true)
	{
		cout<<"input the accuracy to calculate PI:  end with input 0.0\n";
		double accuracy;
		cin>>accuracy;
		if(accuracy==0)break;
		cout<<"the PI ="<<get_PI(accuracy)<<endl;
		cout<<endl;
	}
	cout<<"exited\n";
	return 0;
}