#include <iostream>
#include <string.h>
using namespace std;
//���Ի���

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
	cout<<"���룺";
 	cin>>a;
	if(testHuiwen(a)==1){
		cout<<"�ǻ���\n"; 
	}else{
		cout<<"���ǻ���\n";
	} 	

	return 0; 
} 
