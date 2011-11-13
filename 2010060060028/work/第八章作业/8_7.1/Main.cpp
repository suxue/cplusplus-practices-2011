/*
 * Main.cpp
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */
#include<iostream>
#include"h_work.h"
using namespace std;
int main(){

	Circle cir(0,0,4);
	cir.locate();

	cout<<cir.area();
	Rectangle re(0,0,1,0,1,2,0,2);
	cout<<endl;
	cout<<re.area()<<endl;
	re.locat();
	return 1;
}



