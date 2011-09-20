#include<iostream>
using namespace std;
int main()
{
	int w,d,e;
	cout<<"请输入包裹重量(g)和邮寄距离(km):"<<endl;
	 cin>>w>>d;
	 e=d/1000;
	 	if(0<w&&w<=15)
	 		cout<<"邮资5元"<<endl;
		else if(15<w&&w<=30)
				cout<<"邮资9元"<<endl;
		else if(30<w&&w<=45)
			cout<<"邮资12元"<<endl;
		else if(45<w&&w<=60)
			cout<<"邮资"<<(14+e)<<"元"<<endl;
		else if(60<w)
			cout<<"邮资"<<(15+e)<<"元"<<endl;
		return main();
	
	 
}