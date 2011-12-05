#include<iostream>
using namespace std;
int main()
{
	int w,d,e,a,b;
	cout<<"请输入包裹的重量(g)和邮寄距离(km):"<<endl;
	 cin>>w>>d;
	 e=d/1000;
	 	if(0<w&&w<15)
	 		cout<<"邮资为5元"<<endl;
		else if(15<=w&&w<30)
				cout<<"邮资为9元"<<endl;
		else if(30<=w&&w<45)
			cout<<"邮资为12元"<<endl;
		else if(45<=w&&w<60)
		          a=(14+e);
			cout<<"邮资为"<<a<<"元"<<endl;
			
		else 
                  b=(15+e);
			cout<<"邮资为"<<b<<"元"<<endl;
		return main();
}
	