#include "Node.h"
class Iterator{
	public:
		Iterator();
		bool HasNext();
		Node GetNode();
		void Next();
		~Iterator();
		friend class Link;
	private:
		Node *head,*p,*q;
		bool check;
};

Iterator::~Iterator(){
	q=head;
	p=q->next;
	while(p){
		delete q;
		q=p;
		p=p->next;
	}
	delete q;
}

Iterator::Iterator(){
	q=new Node;
	head=q;
	check=false;
}
void Iterator::Next(){
	p=q;
	p=p->next;
	q=p;
}
bool Iterator::HasNext(){
	if(!check){
		check=true;
		q=head;
	}
	return !(q->next==NULL);
}
Node Iterator::GetNode(){
	return *p;
}
