#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
Employee(int number,float slary)
{
this->number=number;
this->slary=slary;
this->name="Manger";
}
Employee()
{
}
		int number;
		string name;
		float slary;
};
class Manger:public Employee
{
public:
Manger(int number,float slary):Employee(number,slary)
{
this->name="Manger";
}
float getSlary()
{
return 8000;
}
void output()
{
	cout<< "number: "<<number<<endl<<"name: "<<name<<endl<<"slary: "<< getSlary()<<endl;
}
};
class Technician:public Employee
{
private:
int hour;
public:
Technician(int number,float slary,int hour):Employee(number,slary)
{
this->hour=hour;
this->name="technician";
}
float getSlary()
{
return 100*hour;
}
void output()
{
cout<<"number:"<<number<<endl<<"name:"<<name<<endl<<"slary:"<<getSlary()<<endl;
}
};
class Salesman:public Employee
{
private:
float sales;
public:
Salesman(int number,float slary,float sales):Employee(number,slary)
{
this->sales=sales;
this->name="salesman";
}
float  getSlary()
{
return 5000+sales*0.04;
}
void output()
{
cout<<"number:"<<number<<endl<<"name:"<<name<<endl<<"slary:"<<getSlary()<<endl;
}
};
class Salesmanager:public Employee
{
private:
float monthsales;
public:
Salesmanager(int number,float slary,float monthsales):Employee(number,slary)
{
this->monthsales=monthsales;
this->name="salesmanager";
}
float getSlary()
{
 return  monthsales*0.005;
}
void output()
{
cout<<"number:"<<number<<endl<<"name:"<<name<<endl<<"slary:"<<getSlary()<<endl;
}
};

int main()
{

Manger b(11,2);
b.output();
Technician c(22,3,400);
c.output();
Salesman d(33,1,50000);
d.output();
Salesmanager e(44,3,1000000);
e.output();
}



