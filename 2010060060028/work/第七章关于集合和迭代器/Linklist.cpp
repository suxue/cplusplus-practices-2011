/*
 * Linklist.cpp
 *
 *  Created on: 2011-11-30
 *      Author: wepe
 */

#include "Linklist.h"
#include<iostream>
namespace std {

Linklist::Linklist() {
	// TODO Auto-generated constructor stub
  splist=&head;
 head.next=NULL;
}

void Linklist::insert(int x){
	splist->data=x;
	splist->next=new node;
	splist=splist->next;
	splist->next=NULL;
}

void Linklist::prin(node &sp){
	if(sp.next!=NULL){
		cout<<sp.data<<"->";
		this->prin(*sp.next);
	}
	else{
		cout<<"end"<<endl;
	}


}

void Linklist::clearLink(){
  splist=head.next;
  if(splist!=NULL){
	  while(splist->next!=NULL){
	  		 node *temp;
	  		 temp=splist;

	  		 splist=splist->next;
	  		 delete(temp);
	  	 }
	  delete(splist);
  }


	 splist=&head;

}

node* Linklist::getHead(){

    node* temp=&head;
	return temp;
}

void Linklist::copyLink(node* tou){
  this->clearLink()	;
  node* temp=tou;
  while(temp->next!=NULL){
	  this->insert(temp->data);
	  temp=temp->next;
  }
}

void Linklist::prin1(){
	this->prin(head);
}

bool Linklist::isEmpty(){
	if(head.next==NULL){
		return true;
	}else{
		return false;
	}
}

int Linklist::size(){
	node* spp;
	spp=&head;
	int n=0;
	while(spp->next!=NULL){
		n++;
		spp=spp->next;
	}
	return n;
}

bool Linklist::isElement(int e){
	node* spp;
	int record=0;
	spp=&head;
	while(spp->next!=NULL){
		if(spp->data==e){
			record++;
			return true;
			break;
		}else{
			spp=spp->next;
		}

	}
	if(record==0){
		return false;
	}

}


Linklist::~Linklist() {
	// TODO Auto-generated destructor stub
	this->clearLink();
}

} /* namespace std */
