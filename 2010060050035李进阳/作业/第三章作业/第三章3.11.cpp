#include<iostream>
using namespace std;
int main()
{
	int w,d,e,a,b;
	cout<<"���������������(g)���ʼľ���(km):"<<endl;
	 cin>>w>>d;
	 e=d/1000;
	 	if(0<w&&w<15)
	 		cout<<"����Ϊ5Ԫ"<<endl;
		else if(15<=w&&w<30)
				cout<<"����Ϊ9Ԫ"<<endl;
		else if(30<=w&&w<45)
			cout<<"����Ϊ12Ԫ"<<endl;
		else if(45<=w&&w<60)
		          a=(14+e);
			cout<<"����Ϊ"<<a<<"Ԫ"<<endl;
			
		else 
                  b=(15+e);
			cout<<"����Ϊ"<<b<<"Ԫ"<<endl;
		return main();
}
	