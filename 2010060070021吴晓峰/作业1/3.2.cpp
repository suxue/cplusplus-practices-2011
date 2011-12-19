//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	for(int i=100;i<201;i++)
		if(i%3!=0 && i%7!=0)
			cout<<i<<'\t';
	return 0;
}
