/*
 * Technician.h
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */

#ifndef TECHNICIAN_H_
#define TECHNICIAN_H_
#include"Employee.h"
namespace std {

class Technician:public Employee {
public:
	Technician(int time);
	void getMessage1();

	virtual ~Technician();
private:
	int getSalary();
	double worktime;
	double salary;
};

} /* namespace std */
#endif /* TECHNICIAN_H_ */
