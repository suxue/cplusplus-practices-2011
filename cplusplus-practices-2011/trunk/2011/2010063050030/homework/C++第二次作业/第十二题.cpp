#include<iostream>
#include<string>
using namespace std;
struct people{
	string name;
	string phonenumber;
};
int main(){
	people a[6]={{"高哥","1232442"},{"旺哥","7236645"},{"强哥","3254235"},{"村长","9768967"},{"涛哥","2325435"},
	{"马哥","5434367"}};
	int i,c,d;
	string b;
	cin>>b;
	for(i=0;i<6;i++){
		if(((c=a[i].name.find(b))==string::npos)&&((d=a[i].phonenumber.find(b))==string::npos))
		{}
		else {cout<<a[i].name<<'\t'<<a[i].phonenumber<<endl;}
	}
}
