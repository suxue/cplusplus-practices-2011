#include<iostream>
using namespace std;
int main(){
	int i=1,b=0;
	char A[20]={'\0'};
	cout<<"������ģ�����0������"<<endl;
	while(A[i-1]!='0'){
		cin>>A[i];
		i++;
	}
	for(int k=0;k<(int)(i-2)/2;k++){
		if(A[k+1]==A[i-k-2])b++;
	}
	if(b==(int)(i-2)/2)cout<<"�ǻ��ģ�";
	else cout<<"���ǻ��ģ�";	
}
