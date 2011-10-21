#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	cout<<"您输入的字符为："<<"\n";
	cout<<a<<"\n";
	bool h=1;
	int i=0;
	int len=a.size();
	for(i =0; i < (len /2); i++) {
 	if (a[i] != a[len-i-1])
 		h=0;
 	}
		cout<<h<<"\n";
		if(h==1)
		cout<<"该字符是回文"<<"\n"; 
		if(h==0)
		cout<<"该字符不是回文"<<"\n"; 	
}