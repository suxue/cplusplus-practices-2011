#include<iostream>
using namespace std;
int main()
{
	int w,d,e;
	cout<<"�������������(g)���ʼľ���(km):"<<endl;
	 cin>>w>>d;
	 e=d/1000;
	 	if(0<w&&w<=15)
	 		cout<<"����5Ԫ"<<endl;
		else if(15<w&&w<=30)
				cout<<"����9Ԫ"<<endl;
		else if(30<w&&w<=45)
			cout<<"����12Ԫ"<<endl;
		else if(45<w&&w<=60)
			cout<<"����"<<(14+e)<<"Ԫ"<<endl;
		else if(60<w)
			cout<<"����"<<(15+e)<<"Ԫ"<<endl;
		return main();
	
	 
}