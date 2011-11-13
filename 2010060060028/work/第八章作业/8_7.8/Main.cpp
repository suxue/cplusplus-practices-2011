/*
 * Main.cpp
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */


#include<iostream>
#include"Employee.h"
#include"Manager.h"
#include"Technician.h"
#include"Salseman.h"
#include"Salsemanager.h"
using namespace std;
int main(){
	//Employee en;
	//en.getMessage();
	//Manager ma;
	//ma.getMessage1();
	//Technician te(30);
//te.getMessage1();
Salseman sa(50000);
sa.getMessage1();
Salsemanager sal(50000);
sal.getMessage1();

	return 1;
}

