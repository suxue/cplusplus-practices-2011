/*
 * Iterator.h
 *
 *  Created on: 2011-12-2
 *      Author: wepe
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_
#include"Linklist.h"
#include"Just.h"
namespace std {
class Linklist;


class Iterator {
public:
	Iterator(Linklist *lint);
	node* iterate();
	virtual ~Iterator();
private:
	node* sp;
};

} /* namespace std */
#endif /* ITERATOR_H_ */
