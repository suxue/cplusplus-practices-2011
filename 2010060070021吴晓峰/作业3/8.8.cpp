#include <iostream>

using namespace std;

class Employee
{
	public:
		string n;
		string name;
		int salary;
		
		Employee(string n,string name)
		{
			this->n=n;
			this->name=name;
		}
		
		void setSalary()
		{
			
		}
};

class Manager:public Employee
{
	public:
		Manager(string n,string name):Employee(n,name)
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
		
		Technician(string n,string name,int time):Employee(n,name)
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
		
		Salesman(string n,string name,int selfsr):Employee(n,name)
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
		
		Salesmanager(string n,string name,int departsr):Employee(n,name)
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
	cout<<"±àºÅ£º"<<e.n<<endl; 
	cout<<"ÐÕÃû£º"<<e.name<<endl;
	cout<<"¹¤×Ê£º"<<e.salary<<endl;
}

int main()
{
	Manager m("001","Wxf");
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