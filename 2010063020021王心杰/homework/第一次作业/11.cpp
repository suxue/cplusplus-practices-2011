#include<iostream>
using namespace std;
int main()
{
int z,j,yz; 
cout<<"��������������Լ��ʼľ���:\n";
cin>>z>>j;
if(z<=15)
{
	cout<<"�ð���������Ϊ��"<<5;
}
else if(z<=30)
{
	cout<<"�ð���������Ϊ��"<<9;
}
else if(z<=45)
{
	cout<<"�ð���������Ϊ��"<<12;
}
else if(z<=60)
{
	
	cout<<"�ð���������Ϊ��"<<14+j/1000;
}
else
{
	
	cout<<"�ð���������Ϊ��"<<15+j/1000;
}
cout<<"\n";
return 0;
}
