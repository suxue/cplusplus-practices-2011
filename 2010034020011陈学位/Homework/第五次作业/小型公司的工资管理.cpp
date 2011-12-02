#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
	Employee(int num,string nam,double slr):number(num),name(nam),salary(slr){
		
	}

protected:
	int number;
	string name;
	double salary;;
};

class Manager:public Employee{
public:
	Manager(int num,string nam):Employee(num,nam,0){
	}
	friend ostream& operator <<(ostream& out,Manager& S);
};
ostream& operator <<(ostream& out,Manager& S){
	cout<<"Number:"<<S.number<<endl;
	cout<<"Name:"<<S.name<<endl;
	cout<<"Salary Per Month:"<<5000<<endl;
	cout<<endl;
}

class Technician:public Employee{
public:
	Technician(int num,string nam,int h):Employee(num,nam,100),hour(h){
		
	}
	friend ostream& operator <<(ostream& out,Technician& S);
private:
int hour;
};
ostream& operator <<(ostream& out,Technician& S){
	cout<<"Number:"<<S.number<<endl;
	cout<<"Name:"<<S.name<<endl;
	cout<<"Salary Per Month:"<<S.salary*S.hour<<endl;
	cout<<endl;
}

class Salesman:public Employee{
public:
	Salesman(int num,string nam,double sale):Employee(num,nam,sale){
		
	}
	friend ostream& operator <<(ostream& out,Salesman& S);
};
ostream& operator <<(ostream& out,Salesman& S){
	cout<<"Number:"<<S.number<<endl;
	cout<<"Name:"<<S.name<<endl;
	cout<<"Salary Per Month:"<<S.salary*0.04<<endl;
	cout<<endl;
}

class Salesmanager:public Employee{
public:
	Salesmanager(int num,string nam,double sale):Employee(num,nam,sale){
		
	}
	friend ostream& operator <<(ostream& out,Salesmanager& S);
};
ostream& operator <<(ostream& out,Salesmanager& S){
	cout<<"Number:"<<S.number<<endl;
	cout<<"Name:"<<S.name<<endl;
	cout<<"Salary Per Month:"<<S.salary*0.005+5000<<endl;
	cout<<endl;
}

int main()
{
	Manager m1(01,"worker1");
	Technician t1(02,"worker2",220);
	Salesman s1(03,"worker3",300000);
	Salesmanager sm(04,"worker4",300000);
	cout<<m1<<t1<<s1<<sm<<endl;
	return 0;
}
