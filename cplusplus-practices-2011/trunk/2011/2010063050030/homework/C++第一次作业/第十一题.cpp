#include<iostream>
using namespace std;
int main(){
	float i,j;
	cout<<"�������������"<<endl;
	cin>>i;
	cout<<"�������ʼĵľ���"<<endl;
	cin>>j;
	if(i<=15){cout<<"����Ϊ��"<<5<<endl;}
	else if(i<=30){cout<<"����Ϊ��"<<9<<endl;}
	else if(i<=45){cout<<"����Ϊ��"<<12<<endl;}
	else if(i<=60){if(j<1000)cout<<"����Ϊ��"<<14<<endl;else cout<<"����Ϊ��"<<14+j/1000;}
	else {if(j<1000)cout<<"����Ϊ��"<<15<<endl;else cout<<"����Ϊ��"<<15+j/1000;}
}