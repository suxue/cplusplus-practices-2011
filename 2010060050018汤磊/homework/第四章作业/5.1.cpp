#include<iostream>
using namespace std;
int f2c(int f)
{
	return (5/9.0*(f-32))+0.5;
}
int c2f(int c)
{
	
	return 9/5.0*c+32+0.5;
}
int main()
{
	
	int c ,f;
	cout<<"���뻪���¶�:";
	cin>>f;
	cout<<"�����¶�Ϊ:"<<f2c(f)<<endl;
	cout<<"���������¶�:";
	cin>>c;
	cout<<"�����¶�Ϊ:"<<c2f(c)<<endl;
	
}