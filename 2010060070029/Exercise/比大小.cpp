#include<iostream>
using namespace std;
int max(int x,int y)
{
	int z;
	z=(x>y)?x:y;
	return z;
}
int main()
{
	int a,b;
	cout<<"������������:"<<endl; 
	cin>>a>>b;
	cout<<max(a,b)<<endl;
	return 0;
}