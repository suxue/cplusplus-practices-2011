#include<iostream>
#include<string>
using namespace std;
struct people{
	string name;
	string phonenumber;
};
int main(){
	people a[6]={{"�߸�","1232442"},{"����","7236645"},{"ǿ��","3254235"},{"�峤","9768967"},{"�θ�","2325435"},
	{"���","5434367"}};
	int i,c,d;
	string b;
	cin>>b;
	for(i=0;i<6;i++){
		if(((c=a[i].name.find(b))==string::npos)&&((d=a[i].phonenumber.find(b))==string::npos))
		{}
		else {cout<<a[i].name<<'\t'<<a[i].phonenumber<<endl;}
	}
}
