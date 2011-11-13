/*
 * Technician.cpp
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */

#include "Technician.h"
#include<iostream>
namespace std {

Technician::Technician(int time) {
	// TODO Auto-generated constructor stub
	worktime=time;
    salary=this->getSalary();
}
int Technician::getSalary(){
	int sa;
	sa=100*worktime;
	return sa;
}
void Technician::getMessage1(){
	this->getMessage();
	cout<<"salary:"<<salary;
}
Technician::~Technician() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
