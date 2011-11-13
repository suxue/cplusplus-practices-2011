/*
 * Employee.cpp
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */
#include<iostream>
#include<string>
#include "Employee.h"

namespace std {

Employee::Employee() {
	// TODO Auto-generated constructor stub

	cout << "input the name : ";
	cin >> name;

	cout << "input the number:";
	cin >> num;
	salary = getSalary();
}

void Employee::getMessage() {
	cout << "name:" << name << endl;
	cout << "number:" << num << endl;

}
int Employee::getSalary() {
	return salary;
}
Employee::~Employee() {

	// TODO Auto-generated destructor stub
}

} /* namespace std */
