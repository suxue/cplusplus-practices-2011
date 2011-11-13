/*
 * Manager.cpp
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */

#include "Manager.h"
#include"Employee.h"
#include<iostream>
namespace std {

Manager::Manager() {
	// TODO Auto-generated constructor stub
 // Employee();
  salary=this->getSalary();
}
void Manager::getMessage1(){
	this->getMessage();
	cout<<" salary  :"<<salary<<endl;
}
int Manager::getSalary(){
	int sar=8000;
	return sar;
}
Manager::~Manager() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
