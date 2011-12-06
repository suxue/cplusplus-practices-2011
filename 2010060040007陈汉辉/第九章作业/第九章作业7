#include<iostream>
using namespace std;
class Felid{
	public:
	Felid(){
		cout<<"Felid Start!"<<endl;
	}
	virtual void sound(){
		cout<<"Felid sound!"<<endl; 
	}
};
class Cat:public Felid{
	public:
	Cat(){
		cout<<"Cat Start!"<<endl;
	}
	virtual void sound(){
		cout<<"Cat sound!"<<endl;
	}
};
class Leopard:public Felid{
	public:
	Leopard(){
		cout<<"Leopard Start!"<<endl;
	}
	virtual void sound(){
		cout<<"Leopard sound!"<<endl;
	}
};
int main(){
	Felid A;
	Cat B;
	Leopard C;
	Felid *p;
	p=&B;
	p->sound();
	Felid &q=C;
	q.sound();
	return 0;
}