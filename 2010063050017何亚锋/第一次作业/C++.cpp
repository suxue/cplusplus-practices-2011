//============================================================================
// Name        : C++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i;
	for(i=100;i<=200;i++){
		if(i%3&&i%7)
		cout<<i<<' ';
	}
	return 0;
}
