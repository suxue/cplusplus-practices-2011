//============================================================================
// Name        : cpp2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i;
	for(i=0;i<26;i++){
		cout<<char('A'+i)<<' ';
	}
	cout<<endl;
	for(i--;i>=0;i--){
		cout<<char('A'+i)<<' ';
	}
	return 0;
}
