/*
 * Linklist.h
 *
 *  Created on: 2011-11-30
 *      Author: wepe
 */

#ifndef LINKLIST_H_
#define LINKLIST_H_
#include"Iterator.h"
#include"just.h"
namespace std {
class Iterator;


class Linklist {

public:
	Linklist();
	friend class Iterator;
	void insert(int x);
    void copyLink(node* tou);
    void clearLink();
    bool isEmpty();
    node* getHead();
	void prin1();
	int size();
	bool isElement(int e);
	virtual ~Linklist();
private:
	void prin(node &sp);
	node head,*splist;
};

} /* namespace std */
#endif /* LINKLIST_H_ */
