//============================================================================
// Name        : ตฺพลีย.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Felid{
public:
	virtual void sound(){
		cout<<"The sound of Felid!"<<endl;

	}

};

class Cat:public Felid{
public:
	void sound(){
		cout<<"The sound of Cat!"<<endl;
	}
};
class Leopard:public Felid{
public:
	void sound(){
		cout<<"The sound of Leopard!"<<endl;
	}
};

int main() {
	Felid *felid,f;
	Cat cat;
	Leopard leopard;
	felid=&f;
	felid->sound();
	felid=&cat;
	felid->sound();
	felid=&leopard;
	felid->sound();
	return 0;
}
