#include<iostream.h>
using namespace std;
int main()
{
	int w,s,p;
	cout<<"����������������ˣ�"<<endl;
	cin>>w;
	cout<<"�������ʼľ��루ǧ�ף�"<<endl;
	cin>>s;
	if((w>=15)&&(w<30))
	{
	   cout<<"�˷���5Ԫ"<<endl;	
	}
	else if((w>=30)&&(w<45))
	{
		cout<<"�˷���9Ԫ"<<endl;
	}
	else if((w>=45)&&(w<60))
	{
		cout<<"�˷���12Ԫ"<<endl;
	}
	else if((w>=60)&&(w<75))
	{
		p=14+s/1000;
		cout<<"�˷���"<<p<<"Ԫ"<<endl; 
	}
	else if(w>=75)
	{
		p=15+s/1000;
		cout<<"�˷���"<<p<<"Ԫ"<<endl;
	}
	else if(w<15)
	{
		cout<<"����Ҫ�˷�"<<endl;
	}
	else  cout<<"error!"<<endl;
	return 0;
}