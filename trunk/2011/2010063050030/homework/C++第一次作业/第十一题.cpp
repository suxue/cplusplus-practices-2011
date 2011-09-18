#include<iostream>
using namespace std;
int main(){
	float i,j;
	cout<<"请输入包裹重量"<<endl;
	cin>>i;
	cout<<"请输入邮寄的距离"<<endl;
	cin>>j;
	if(i<=15){cout<<"邮资为："<<5<<endl;}
	else if(i<=30){cout<<"邮资为："<<9<<endl;}
	else if(i<=45){cout<<"邮资为："<<12<<endl;}
	else if(i<=60){if(j<1000)cout<<"邮资为："<<14<<endl;else cout<<"邮资为："<<14+j/1000;}
	else {if(j<1000)cout<<"邮资为："<<15<<endl;else cout<<"邮资为："<<15+j/1000;}
}