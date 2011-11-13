/*
 * Salsemanager.cpp
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */

#include "Salsemanager.h"
#include<iostream>
namespace std {

Salsemanager::Salsemanager(double sale) {
	// TODO Auto-generated constructor stub
  this->sale=sale;
  salary=getSalary();
}
double Salsemanager::getSalary(){
	double sa;
	sa=5000+0.005*sale;
	return sa;
}
void Salsemanager::getMessage1(){
	this->getMessage();
	cout<<"salary:"<<salary<<endl;
}
Salsemanager::~Salsemanager() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
