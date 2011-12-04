/*
 * Felid.h
 *
 *  Created on: 2011-12-2
 *      Author: wepe
 */

#ifndef FELID_H_
#define FELID_H_
#include<string>
namespace std {

class Felid {
public:
	Felid();
	virtual string sound();
	virtual ~Felid();
private:
	string sou;
};

} /* namespace std */
#endif /* FELID_H_ */
