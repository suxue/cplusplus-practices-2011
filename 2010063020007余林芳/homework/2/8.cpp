#include<iostream>
using namespace std;
int main(){
char a[100];
int i,len;
cout<<"������һ���ַ���"<<endl;
cin>>a;		
len=strlen(a);
	if(len%2==0){
		for(i=0;i<len/2;i++){
			if(a[i]=a[len-i-1])
			break;
			} 
			cout<<"�ǻ���";
	}
	else if(len%2!=0){
		for(i=0;i<(len-1)/2;i++){
			if(a[i]=a[len-i-1])
			break;
			}
			cout<<"�ǻ���"; 
	}
	else cout<<"���ǻ���"; 
}