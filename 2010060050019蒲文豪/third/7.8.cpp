#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
	Employee(int num,string nam,double slr):number(num),name(nam),salary(slr){}

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
	cout<<"编号:"<<S.number<<endl;
	cout<<"姓名:"<<S.name<<endl;
	cout<<"月工资:"<<8000<<endl;
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
	cout<<"编号:"<<S.number<<endl;
	cout<<"姓名:"<<S.name<<endl;
	cout<<"月工资:"<<S.salary*S.hour<<endl;
}

class Salesman:public Employee{
public:
	Salesman(int num,string nam,double sale):Employee(num,nam,sale){
		
	}
	friend ostream& operator <<(ostream& out,Salesman& S);
};
ostream& operator <<(ostream& out,Salesman& S){
	cout<<"编号:"<<S.number<<endl;
	cout<<"姓名:"<<S.name<<endl;
	cout<<"月工资:"<<S.salary*0.04<<endl;
}

class Salesmanager:public Employee{
public:
	Salesmanager(int num,string nam,double sale):Employee(num,nam,sale){
		
	}
	friend ostream& operator <<(ostream& out,Salesmanager& S);
};
ostream& operator <<(ostream& out,Salesmanager& S){
	cout<<"编号:"<<S.number<<endl;
	cout<<"姓名:"<<S.name<<endl;
	cout<<"月工资:"<<S.salary*0.005+5000<<endl;
}

int main()
{
	Manager m1(01,"Manager");
	Technician t1(02,"Technician",200);
	Salesman s1(03,"Salesman",30000);
	Salesmanager sa(04,"Salesmanager",30000);
	cout<<m1<<t1<<s1<<sa<<endl;
	return 0;
}