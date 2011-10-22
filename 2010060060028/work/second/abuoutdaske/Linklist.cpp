#include<iostream>
#include"Linklist.h"
using namespace std;
Linklist::Linklist() {

}
Linklist::~Linklist() {
	link *temp;
	while (sp->next != NULL) {
		temp = sp;

		sp = sp->next;
		delete (temp);

	}
//temp=sp;
	delete (sp);
}
void Linklist::print() {
	if (sp->next != NULL) {
		do {
			sp = sp->next;
			cout << sp->data << endl;
		} while (sp->next != NULL);
		sp = &head;
	} else {
		cout << "the stack is empty " << endl;
	}

}
void Linklist::create(int n) {

	sp = &head;
	for (int i = 0; i < n; i++) {
		sp->next = new link;
		sp = sp->next;
		cout << "data(" << i << ") =";
		cin >> sp->data;
		cout << endl;
	}
	sp->next = NULL;
	sp = &head;
}
void Linklist::push(int need) {
	link *temp = new link;
	temp->data = need;
	temp->next = head.next;
	head.next = temp;
	sp = &head;

}
int Linklist::delet(int need) {
	link *temp, *up;
	int i = 0;
	up = &head;
	if (sp->next != NULL) {
		while (sp->next != NULL) {

			if (sp->data == need) {
				temp = sp;
				sp = sp->next;
				up->next = sp;
				delete (temp);

				i++;
			} else {
				up = sp;
				sp = sp->next;
			}
		}
		if (sp->data == need) {
			up->next = NULL;
			delete (sp); //由于上面的循环没办法判断最后一个节点，所以这里就要多一步；
		}
		sp = &head;
	} else {
		cout << "the stack is empty!" << endl;
	}

	return i;
}
int Linklist::pop() {
	link *temp;
	if (sp->next != NULL) {

		temp = sp->next;
		sp->next = sp->next->next;
		delete (temp);

	} else {
		cout << "the stack is empty!" << endl;
	}
	return 0;
}
