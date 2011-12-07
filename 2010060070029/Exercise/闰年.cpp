#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"请输入一个年份";
	cin>>n;
	if(n%400==0||(n%4==0&&n%100!=0))
	  cout<<n<<"为闰年";
	else 
	  cout<<n<<"不是闰年";  
	return 0;
}