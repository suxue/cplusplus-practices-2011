#include <iostream>
#include <string.h>
using namespace std;
//测试回文

int testHuiwen(char *c){
	int	status=1;
	for(int i=0;i<strlen(c);i++){
		
		if(c[i]!=c[strlen(c)-i-1]){
			status=0;
			break;
		}
	
	}

	return status;
}

int main(){
	char a[100];
	cout<<"输入：";
 	cin>>a;
	if(testHuiwen(a)==1){
		cout<<"是回文\n"; 
	}else{
		cout<<"不是回文\n";
	} 	

	return 0; 
} 
