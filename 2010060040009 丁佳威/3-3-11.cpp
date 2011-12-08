#include <iostream>
using namespace std;
int main(){
	int w,l;
	cout<<"Enter the weitht:";
	cin>>w;
	cout<<"Enter the length:";
	cin>>l;
	if(w<15)
		cout<<"The Money is 5"<<endl;
	else if(w<30)
		cout<<"The Money is 9"<<endl;
	else if(w<45)
		cout<<"The Money is 12"<<endl;
	else if(w<60)
		cout<<"The Money is "<<14+l/1000<<endl;
	else 
		cout<<"The Money is "<<15+l/1000<<endl;
		return 0;
}
