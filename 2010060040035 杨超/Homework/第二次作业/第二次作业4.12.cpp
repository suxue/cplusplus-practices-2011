#include<iostream>
using namespace std;
struct {
	char name[10];
	char telephone[10];
}telebook[]={
    	{"阳阳","1234567"},{"阳金","234567"},{"小明","12367"}
		,{"小红","8976543"},{"东东","8910543"}
    };
int main(){
	char NAME[10],TELNO[10],*p,*q;
	int n,m;
	cout<<"请输入名字查询"<<endl;
	cin>>NAME;
	for(int a=0;a<5;a++){
		p=NAME;
		q=telebook[a].name;
		m=strlen(p);
		for(int b=1;b<=m;b++){
			if(*p==*q){
				p++;
				q++;
			}
			else
			break;
			if(b==m)
			cout<<telebook[a].name<<telebook[a].telephone<<endl;
		}
	}
	cout<<"请输入号码查询"<<endl;
	cin>>TELNO;
	for(int a=0;a<5;a++){
		p=TELNO;
		q=telebook[a].telephone;
		n=strlen(p);
		for(int b=1;b<=n;b++){
			if(*p==*q){
				p++;
				q++;
			}
			else
			break;
			if(b==n)
			cout<<telebook[a].name<<telebook[a].telephone<<endl;
		}
	}
	return 0;
}