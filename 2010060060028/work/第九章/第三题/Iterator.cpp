/*
 * Iterator.cpp
 *
 *  Created on: 2011-12-2
 *      Author: wepe
 */

#include "Iterator.h"
#include<string>
namespace std {

Iterator::Iterator(Linklist *link) {
	// TODO Auto-generated constructor stub
  sp=&link->head;
}
node* Iterator::iterate(){
	if(sp->next!=NULL){
		node* spp;
		spp=sp;
		sp=sp->next;
		return spp;
	}else{
		return NULL;
	}
}

Iterator::~Iterator() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
