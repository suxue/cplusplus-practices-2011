#include <iostream>
using namespace std;
double PI(double precision) 
{
	double tmp(0);
	for(int i=1;1.0/(i*2-1)>precision;i++)
	tmp=tem+1.0/(i*2-1)*(i%2?1:-1);
	return tmp*4;
}




int main()
{
	cout<<PI(0.00000001)<<endl;
	return 0;
}