#include<iostream>
#include <string.h>
using namespace std;
struct message{
	char name[10];
	char telephone[10];
};
message s[]={
    	{"aa","1234"},{"ab","12345"},{"abc","1245"}
		,{"d","5432"},{"e","23145"}
    };
int main(){
	char NAME[10],TELNO[10],*p,*q;
	int n,m,order,temp=1;
while(temp){  
        int count=0;   	
       	cout<<"please input order£º\n1¡¢search by name\n2¡¢search by number\n3¡¢exit"<<endl;
        cin>>order;
 switch(order){  
case 1:	
      cout<<"please input name:"<<endl;
	cin>>NAME;
	for(int a=0;a<5;a++){
		p=NAME;
		q=s[a].name;
		m=strlen(p);
		for(int b=1;b<=m;b++){
			if(*p==*q){
				p++;
				q++;
			}
	     	else
			break;
			if(b==m)		
			cout<<"NAME:"<<s[a].name<<"  TEL:"<<s[a].telephone<<endl;
			count++	;	
		}
	}
	if(count==0){
	cout<<"NOT FOUND!"<<endl;
	}
	break;
	case 2:
	cout<<"please input number:"<<endl;
	cin>>TELNO;
	for(int a=0;a<5;a++){
		p=TELNO;
		q=s[a].telephone;
		n=strlen(p);
		for(int b=1;b<=n;b++){
			if(*p==*q){
				p++;
				q++;
			}
			else
			break;
			if(b==n)
			cout<<"NAME:"<<s[a].name<<"  TEL:"<<s[a].telephone<<endl;
			count++;
		}
	}	if(count==0){
	cout<<"NOT FOUND!"<<endl;
	}
	break;
	case 3:
	cout<<"GOOD BYE!";
	temp=0;
	break;
	}}
	return 0;
}