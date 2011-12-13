#include <iostream>
using namespace std;
double power(double x,double y)
{
	if(y==0)
	return 1;
	else
	return x*power(x,y-1);
}
int main()
{
	double x;
	int y;
	cout<<"input x:"<<endl;
	cin>>x;
	cout<<"input y:"<<endl;
	cin>>y;
	cout<<"power("<<x<<","<<y<<")="<<power(x,y)<<endl;
	return 0;
}
