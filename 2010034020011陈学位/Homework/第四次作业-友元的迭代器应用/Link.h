#include<iostream>
using namespace std;
#include "Iterator.h"

class Link{
	public:
		Link& append(int num);
		Iterator iterator;
};
Link& Link::append(int num){
	iterator.p=new Node;
	iterator.p->val=num;
	iterator.q->next=iterator.p;
	iterator.q=iterator.p;
	return *this;
}

