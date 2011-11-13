/*
 * Employee.h
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include<string>
namespace std {

class Employee {
public:
	Employee();
	virtual ~Employee();
	void getMessage();

private:
	int salary;
    int getSalary();
	string name,num;
};

} /* namespace std */
#endif /* EMPLOYEE_H_ */
