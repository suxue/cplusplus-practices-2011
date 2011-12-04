#include <iostream>
#include <cstring>
using namespace std;

bool ps(char *a){
	int len=strlen(a),i=0;
	while((a[i]==a[len-1-i])&&(i<len)){
		i++;
	}
	return i==len;
}

int main() {
	char a[100];
	cin>>a;
	if(ps(a))cout<<"ps!"<<endl;
	else cout<<"NO!"<<endl;
	return 0;
}
