/*
 * Cat.h
 *
 *  Created on: 2011-12-2
 *      Author: wepe
 */

#ifndef CAT_H_
#define CAT_H_
#include"Felid.h"

namespace std {

class Cat: public Felid{
public:
	Cat();
	string sound();
	virtual ~Cat();
private:
	string sou;
};

} /* namespace std */
#endif /* CAT_H_ */
