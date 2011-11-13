/*
 * Manager.h
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */

#ifndef MANAGER_H_
#define MANAGER_H_
#include"Employee.h"
namespace std {

class Manager: public Employee {
public:
	Manager();
	void getMessage1();
	virtual ~Manager();
private :
	int getSalary();
	double salary;
};

} /* namespace std */
#endif /* MANAGER_H_ */
