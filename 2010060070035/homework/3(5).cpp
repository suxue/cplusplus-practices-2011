//正逆序输出26个大写英文字母 
#include<iostream>
using namespace std;
int main(){// 65 90
	for(int i=0;i<26;i++){
		cout<<(char)(i+65)<<endl;
	}

	
	for(int i=25;i>=0;i--){
		cout<<(char)(i+65)<<endl;
	}
		return 0;
} 