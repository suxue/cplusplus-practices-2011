#include<iostream>
#include"Linklist.h"
using namespace std;
int main() {
	Linklist li;

	li.create(5);

	li.print();
	cout << "****" << endl;
	li.delet(4);
	li.print();
	cout << "****" << endl;
	li.push(2);
	li.print();
	cout << "****" << endl;

	li.pop();
	li.print();

	cout << "****" << endl;
	li.~Linklist();
	cout<<"thanks!"<<endl;
	return 0;
}
