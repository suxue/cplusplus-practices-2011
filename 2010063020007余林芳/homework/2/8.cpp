#include<iostream>
using namespace std;
int main(){
char a[100];
int i,len;
cout<<"请输入一串字符！"<<endl;
cin>>a;		
len=strlen(a);
	if(len%2==0){
		for(i=0;i<len/2;i++){
			if(a[i]=a[len-i-1])
			break;
			} 
			cout<<"是回文";
	}
	else if(len%2!=0){
		for(i=0;i<(len-1)/2;i++){
			if(a[i]=a[len-i-1])
			break;
			}
			cout<<"是回文"; 
	}
	else cout<<"不是回文"; 
}