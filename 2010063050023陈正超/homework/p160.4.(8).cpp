//============================================================================
// Name        : p160.4.(8).cpp
// Author      : st.king
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool palindrome(char *a){
	int len=strlen(a),i=0;
	while((a[i]==a[len-1-i])&&(i<len)){
		i++;
	}
	return i==len;
}

int main() {
	char a[100];
	cin>>a;
	if(palindrome(a))cout<<"palindrome!"<<endl;
	else cout<<"NO!"<<endl;
	return 0;
}
