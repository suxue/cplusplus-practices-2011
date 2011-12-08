#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
	Employee(int number,string name)
	{
         	this->number=number;
			this->name=name;
	}

public:
	int number;
	string name;
	double salary;
};
class Manager:public Employee
	{
	public:

		Manager(int number, string name):Employee(number,name){

		}

		void setSalary(){
			salary=8000;
		}


};
class Technician:public Employee
{
	public:
		int time;

		Technician(int number,string name,int time):Employee(number,name)
		{
			this->time=time;
		}

		void setSalary()
		{
			this->salary=this->time*100;
		}
};
class Salesman:public Employee
{
	public:
		int sale;

		Salesman(int number,string name,int sale):Employee(number,name)
		{
			this->sale=sale;
		}

		void setSalary()
		{
			this->salary=0.04*sale;
		}
};

class Salesmanager:public Employee
{
	public:
		int sale;

		Salesmanager(int number,string name,int sale):Employee(number,name)
		{
			this->sale=sale;
		}

		void setSalary()
		{
			this->salary=0.005*sale+5000;
		}
};
void getInfo(Employee e){

		cout<<"±àºÅ£º"<<e.number<<endl;
		cout<<"ÐÕÃû£º"<<e.name<<endl;
		cout<<"¹¤×Ê£º"<<e.salary<<endl;


	}

int main()
{
	Manager m(1,"Apple");
	Technician t(2,"Banana",240);
	Salesman s1(3,"Cady",1000000);
	Salesmanager s2(4,"David",10000000);
	m.setSalary();
	t.setSalary();
	s1.setSalary();
	s2.setSalary();
	getInfo(m);
	getInfo(t);
	getInfo(s1);
	getInfo(s2);
	return 0;
}
