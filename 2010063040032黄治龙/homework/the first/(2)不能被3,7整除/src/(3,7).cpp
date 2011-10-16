//============================================================================
// Name        : (3,7).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i;
	cout << "The results" << endl;
	for(i=100;i<=200;i++)
	{
		if((i%3!=0)&&(i%7!=0))
		{
			cout << i << endl;
		}
	}
	return 0;
}
