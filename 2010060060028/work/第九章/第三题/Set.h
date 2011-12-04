/*
 * Set.h
 *
 *  Created on: 2011-12-2
 *      Author: wepe
 */
#include"Linklist.h"
#ifndef SET_H_
#define SET_H_

namespace std {

class Set {
public:
	Set();
	bool isEmpty();
	int size();
	bool isElement(int e);
	bool isSubset(Set *s);
	bool isEqual(Set *s);
	void insert(int e);
	Set union1(Set *s);
	Set intersection( Set *s);
	Set difference(Set *s);
	void prinSet();
	virtual ~Set();
private:
	Linklist link;
};

} /* namespace std */
#endif /* SET_H_ */
