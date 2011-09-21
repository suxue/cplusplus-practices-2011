#include<iostream.h>
using namespace std;
int main()
{
	int w,s,p;
	cout<<"请输入包裹重量（克）"<<endl;
	cin>>w;
	cout<<"请输入邮寄距离（千米）"<<endl;
	cin>>s;
	if((w>=15)&&(w<30))
	{
	   cout<<"运费是5元"<<endl;	
	}
	else if((w>=30)&&(w<45))
	{
		cout<<"运费是9元"<<endl;
	}
	else if((w>=45)&&(w<60))
	{
		cout<<"运费是12元"<<endl;
	}
	else if((w>=60)&&(w<75))
	{
		p=14+s/1000;
		cout<<"运费是"<<p<<"元"<<endl; 
	}
	else if(w>=75)
	{
		p=15+s/1000;
		cout<<"运费是"<<p<<"元"<<endl;
	}
	else if(w<15)
	{
		cout<<"不需要运费"<<endl;
	}
	else  cout<<"error!"<<endl;
	return 0;
}