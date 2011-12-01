//============================================================================
// Name        : cpp3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double weight,distance,money;
	cin>>weight>>distance;
	if(weight<=15) money=5;
	else if(weight<=30) money=9;
	else if(weight<=45) money=12;
	else if(weight<=60) money=14+distance/1000;
	else money=15+distance/1000;
	cout<<money;
	return 0;
}
