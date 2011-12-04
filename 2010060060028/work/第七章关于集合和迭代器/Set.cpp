/*
 * Set.cpp
 *
 *  Created on: 2011-12-2
 *      Author: wepe
 */

#include "Set.h"
#include"Iterator"
namespace std {

Set::Set() {
	     // TODO Auto-generated constructor stub

}

bool Set::isEmpty(){
	if(link.isEmpty()){
		return true;
	}else{
		return false;
	}
}

int Set::size(){
	return this->link.size();
}

bool Set::isElement(int e){
	if(link.isElement(e)){
		return true;
	}
	else{
		return false;
	}
}


bool Set::isSubset(Set *s){
    Iterator it(&s->link);
    node* isit=it.iterate();
    int order=0;
    while(isit!=NULL){
    	if(this->isElement(isit->data)){
    		isit=it.iterate();
    		order++;
    	}else{
    		return false;
    		break;
    	}

    }

    if(order==s->size()){
    	return true;
    }else{
    	return false;
    }
}
bool Set::isEqual(Set *s){
	if(this->isSubset(s)&&s->isSubset(this)){
		return true;
	}else{
		return false;
	}
}

void Set::insert(int e){
	this->link.insert(e);
}
Set Set::union1(Set *s){
	Set newset;
	Iterator its(&s->link);

	node* sp;
	newset.link.copyLink(this->link.getHead());


	sp=its.iterate();

	for(int i=0;i<s->size();i++){
		if(this->isElement(sp->data)){

					sp=its.iterate();

					}else{
						newset.insert(sp->data);
						sp=its.iterate();
					}
	}


	return newset;

}

Set Set::intersection(Set *s){
	Set newset;
	Iterator its(&s->link);
     node* sp;
     sp=its.iterate();
	for(int i=0;i<s->size();i++){
			if(this->isElement(sp->data)){
				newset.insert(sp->data);
						sp=its.iterate();

						}else{


							sp=its.iterate();

						}
		}
	return newset;
}

Set Set::difference(Set *s){
	Set newset;
		Iterator its(&s->link);          //����ָ�������˽�г�Ա�����ǲ�û�б����ѵ���ν��˽��ֻ�ǶԱ�����Ч����û��������ָ������ķ��ʣ�����
	     node* sp;
	     sp=its.iterate();
		for(int i=0;i<s->size();i++){
				if(this->isElement(sp->data)){
							sp=its.iterate();
							}else{
								newset.insert(sp->data);
								sp=its.iterate();
							}
			}
		return newset;
}

void Set::prinSet(){
	this->link.prin1();
}
Set::~Set() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
