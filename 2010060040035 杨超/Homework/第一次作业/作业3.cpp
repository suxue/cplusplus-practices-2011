#include<iostream>
using namespace std;
int main()
{
	float a,b,Youzi;
	cout<<"����������";
	cin>>a;
	if(a<=15)
	cout<<"Youzi="<<5;
	else if(a<=30)
	cout<<"Youzi="<<9;
	else if(a<=45)
	cout<<"Youzi="<<12;
	else 
	{
		cout<<"���������ʾ���";
		cin>>b;
		if(a<=60) 
		cout<<"Youzi="<<14+b/1000;
		else
		cout<<"Youzi="<<15+b/1000;
		
	}
	getchar();
	return 0;

} 