/*
 * Author: Huangxiaolei
 * Date:   2010/10/26
 * Function: 工资管理
 */
#include<iostream>
using namespace std;

class Employee {
protected:
	protected:
	char *name;
	char *id;
public:
	Employee(const char *n,const char *i) {
		int lenn=strlen(n),leni=strlen(i);
		if(lenn>=1&&leni>=1) {
			name=new char[lenn+1];
			id=new char[leni+1];
			strcpy(name,n);
			name[lenn]='\0';
			strcpy(id,i);
			id[leni]='\0';
		}
		else {
			cerr << "ERROR IN CONSTRUCTION" << endl;
			system("pause");
			exit(-1);
		}
	}
	void disp() const {
		cout << "name:" << name << "\tid:" << id;
	}
};

class Manager : public Employee {
public:
	Manager(const char *n,const char *i):Employee(n,i) {}
	void disp() {
		Employee::disp();
		cout << "\twage:" << 8000 << endl;
	}
};

class Technician : public Employee {
private:
	int workingHour;
	static float basic_wage;
public:
	Technician(const char *n,const char *i,const int &wh)
		:
	Employee(n,i),workingHour(wh) {}
	void disp() {
		Employee::disp();
		cout << "\twage:" << workingHour*basic_wage << endl;
	}
};
float Technician::basic_wage=100.0f;

class Salesman : public Employee {
private:
	float totalSales;
	static float rate;
public:
	Salesman(const char *n,const char *i,const float ts)
		:
	Employee(n,i),totalSales(ts) {}
	void disp() {
		Employee::disp();
		cout << "\twage:" << totalSales*rate << endl;
	}
};
float Salesman::rate=0.04f;

class SalesManager : public Employee {
private:
	static float basicWage;
	static float rate;
	float depTotalSales;
public:
	SalesManager(const char *n,const char *i,const float dts)
		:
	Employee(n,i),depTotalSales(dts) {}
	void disp() {
		Employee::disp();
		cout << "\twage:" << basicWage+rate*depTotalSales << endl;
	}
};
float SalesManager::rate=0.005f;
float SalesManager::basicWage=5000.0f;

int main() {
	Manager m("a","1001");
	m.disp();
	Technician t("b","1002",240);
	t.disp();
	Salesman s("c","1003",250000.0f);
	s.disp();
	SalesManager smgr("d","1004",9000000.0f);
	smgr.disp();
	system("pause");
	return 0;
}
