/*
 * Leopard.h
 *
 *  Created on: 2011-12-2
 *      Author: wepe
 */

#ifndef LEOPARD_H_
#define LEOPARD_H_
#include"Felid.h"
namespace std {

class Leopard:public Felid {
public:
	Leopard();
	string sound();
	virtual ~Leopard();
private:
	string sou1;
};

} /* namespace std */
#endif /* LEOPARD_H_ */
