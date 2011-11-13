/*
 * Salseman.cpp
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */

#include "Salseman.h"
#include<iostream>
namespace std {

Salseman::Salseman(double sale) {
	// TODO Auto-generated constructor stub
   this->sale=sale;
   salary=this->getSalary();
}
void Salseman::getMessage1(){
	this->getMessage();
	cout<<"salary:"<<salary<<endl;
}
double Salseman::getSalary(){
	double sa;
	sa=(0.04)*sale;
	return sa;
}
Salseman::~Salseman() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
