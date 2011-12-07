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
	cout<<"输入华氏温度:";
	cin>>f;
	cout<<"摄氏温度为:"<<f2c(f)<<endl;
	cout<<"输入摄氏温度:";
	cin>>c;
	cout<<"华氏温度为:"<<c2f(c)<<endl;
	
}