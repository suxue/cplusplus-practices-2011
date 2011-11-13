/*
 * Salsemanager.h
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */

#ifndef SALSEMANAGER_H_
#define SALSEMANAGER_H_
#include"Employee.h"
namespace std {

class Salsemanager:Employee {
public:
	Salsemanager(double sale);
	void getMessage1();
	virtual ~Salsemanager();
private:
	double getSalary();
	double salary,sale;
};

} /* namespace std */
#endif /* SALSEMANAGER_H_ */
