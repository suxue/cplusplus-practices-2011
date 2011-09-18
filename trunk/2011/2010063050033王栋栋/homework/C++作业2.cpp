#include<iostream>
using namespace std;
int main(){
char zm='A';
	cout<<"正向输出26个字母:"<<endl;
		for(int i=0;i<26;i++){
			cout<<(char)(zm+i)<<'\t';
			}
		cout<<endl;
		cout<<"逆向输出26个字母:"<<endl;
		for(int j=25;j>=0;j--){
			cout<<(char)(zm+j)<<'\t';
		} 
}