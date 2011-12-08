#include <iostream>
using namespace std;
class Felid
{
public:
	Felid()
	{
		cout<<"Felid constructor"<<endl;
	}
	~Felid()
	{
		cout<<"Felid destructor"<<endl;
	}
	virtual void sound() const
	{
		cout<<"Felid sound"<<endl;	
	}
};

class Cat : public Felid
{
public:
	Cat()
	{
		cout<<"Cat constructor"<<endl;
	}
	~Cat()
	{
		cout<<"Cat destructor"<<endl;
	}
	void sound() const
	{
		cout<<"Mao"<<endl;	
	}
};

class Leopard : public Felid
{
public:
	Leopard()
	{
		cout<<"Leopard constructor"<<endl;
	}
	~Leopard()
	{
		cout<<"Leopard destructor"<<endl;
	}
	void sound() const
	{
		cout<<"Bao"<<endl;
	}
};
