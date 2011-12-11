
#include <iostream>
#include <iomanip>
using namespace std;
class Felid{
public:
	virtual void sound(){
		cout<<"I am a felid"<<endl;

	}

};
class Cat:public Felid{
public:
	void sound(){
		cout<<"I am a cat"<<endl;
	}
};
class Leopard:public Felid{
public:
	void sound(){
		cout<<"I am a leopard"<<endl;
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

}
