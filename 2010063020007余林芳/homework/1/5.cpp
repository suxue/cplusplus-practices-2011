#include<iostream>
using namespace std;
int main(){
	int i,a[26];
	for(i=0;i<=25;i++){
		a[i]=i+65;
		cout<<(char)a[i]<<endl;
	}
	for(i=25;i>=0;i--){
		a[i]=i+65;
		cout<<(char)a[i]<<endl;
	}
}