#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	cout<<"输入重量  " <<"输入距离";
	cin>>i>>k; 
	if(i>15&&i<=30)
	{
		j=5;
	}
	else if(i>30&&i<=45)
	{
		j=9;
	}
	else if(i>45&&i<=60)
	{
		j=12;
	}
	else if(i>60&&i<=75)
	{
		j=14+k/1000;
	}
	else if(i>75)
	{
		j=15+k/1000;
	}
	cout<<j<<endl;
}