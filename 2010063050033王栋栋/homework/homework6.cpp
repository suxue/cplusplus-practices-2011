#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	cout<<"��������ַ�Ϊ��"<<"\n";
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
		cout<<"���ַ��ǻ���"<<"\n"; 
		if(h==0)
		cout<<"���ַ����ǻ���"<<"\n"; 	
}