#include<iostream>
using namespace std;
struct {
	char name[10];
	char telephone[10];
}telebook[]={
    	{"����","1234567"},{"����","234567"},{"С��","12367"}
		,{"С��","8976543"},{"����","8910543"}
    };
int main(){
	char NAME[10],TELNO[10],*p,*q;
	int n,m;
	cout<<"���������ֲ�ѯ"<<endl;
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
	cout<<"����������ѯ"<<endl;
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