#include <iostream>

using namespace std;

class Employee
{
	public:
		string number;
		string name;
		int salary;
		
		Employee(string number,string name)
		{
			this->number=number;
			this->name=name;
		}
		
		void setSalary()
		{
			
		}
};

class Manager:public Employee
{
	public:
		Manager(string number,string name):Employee(number,name)
		{
			
		}
		
		void setSalary()
		{
			this->salary=8000;
		}		
};

class Technician:public Employee
{
	public:
		int time;
		
		Technician(string number,string name,int time):Employee(number,name)
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
		int selfsr;
		
		Salesman(string number,string name,int selfsr):Employee(number,name)
		{
			this->selfsr=selfsr;
		}
		
		void setSalary()
		{
			this->salary=0.04*selfsr;
		}
};

class Salesmanager:public Employee
{
	public:
		int departsr;
		
		Salesmanager(string number,string name,int departsr):Employee(number,name)
		{
			this->departsr=departsr;
		}
		
		void setSalary()
		{
			this->salary=0.005*departsr+5000;
		}
};

void getMessage(Employee e)
{
	cout<<"±àºÅ£º"<<e.number<<endl; 
	cout<<"ÐÕÃû£º"<<e.name<<endl;
	cout<<"¹¤×Ê£º"<<e.salary<<endl;
}

int main()
{
	Manager m("001","Wy");
	Technician t("002","Yn",30);
	Salesman sman("003","Qbm",100000);
	Salesmanager smanager("004","Ckr",500000); 
	m.setSalary();
	t.setSalary();
	sman.setSalary();
	smanager.setSalary();
	getMessage(m);
	getMessage(t);
	getMessage(sman);
	getMessage(smanager);
	return 0;
}
