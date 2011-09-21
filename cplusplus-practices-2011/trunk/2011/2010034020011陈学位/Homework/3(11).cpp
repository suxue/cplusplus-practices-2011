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
		double weight,dist;
		int money;
		printf("input the weight and the distance,end with input 0 0\n");
		cin>>weight>>dist;
		if(weight<=15)
		{
			money=5;
		}
		else if(weight<=30)
		{
			money=9;
		}
		else if(weight<=45)
		{
			money=12;
		}
		else if(weight<=60)
		{
			money=14+(int)(dist/1000+1e-8);
		}
		else 
		{
			money=15+(int)(dist/1000+1e-8);
		}
		cout<<"each package cost "<<money<<" yuan"<<endl; 
	}	
	return 0;
}