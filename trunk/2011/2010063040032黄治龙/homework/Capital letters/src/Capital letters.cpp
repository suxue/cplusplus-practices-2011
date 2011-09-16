//============================================================================
// Name        : Capital.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char letters='A';
	int i;
	for(i=0;i<26;i++)
	{
		cout << letters << endl;
		letters+=1;
	}
	for(i=0;i<26;i++)
	{
		letters-=1;
		cout << letters << endl;
	}
	return 0;
}
