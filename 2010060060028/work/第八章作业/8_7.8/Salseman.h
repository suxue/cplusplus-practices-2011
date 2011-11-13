/*
 * Salseman.h
 *
 *  Created on: 2011-11-12
 *      Author: wepe
 */

#ifndef SALSEMAN_H_
#define SALSEMAN_H_
#include"Employee.h"
namespace std {

class Salseman:public Employee {
public:
	Salseman(double sale);
	void getMessage1();
	virtual ~Salseman();
private:
	double getSalary();
	double salary;
	double sale;
};

} /* namespace std */
#endif /* SALSEMAN_H_ */
