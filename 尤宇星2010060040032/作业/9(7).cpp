#include <iostream>
using namespace std;
class field
{
	public:
	field()
	{
		cout<<"field constructor"<<endl;
	}
	~field()
	{
		cout<<"field constructor"<<endl;
	}
	virtual void sound()const
	{
	cout<<"field sound"<<endl;	
	}
};
class cat:public field
{
	public:
	cat()
	{
	cout<<"cat constructor"<<endl;	
	}
	~cat()
	{
	cout<<"cat constructor"<<endl;	
	}
	void sound()const
	{
		cout<<"mao"<<endl;	
	}
};
class leopard:public field
{
	public:
	leopard()
	{
		cout<<"leopard constructor";
	}
	~leopard()
	{
		cout<<"leopard constructor";
	}
	void sound()const
	{
		cout<<"hello"<<endl;
	}
};
int main()
{
	field *animal;
	animal=new cat;
	animal->sound();
	delete animal;
	animal=new leopard;
	animal->sound();
	delete animal;
	return 0;
}
