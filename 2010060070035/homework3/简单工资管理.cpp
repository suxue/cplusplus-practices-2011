#include <iostream>
#include <string.h>
using namespace std; 

//实现简单工资管理

//定义基类 职员
class Employee{
	public:
		//编号 姓名 
 		Employee(int _id, string _name){
			id=_id;
			name=_name;
		}
		
		string getName(){
			return name;
		}	
		
		int getId(){
			return id;
		}
		int getSalary(){
			return salary;
			}
		
		
	
	public:
	 int id;
	 string name;
	 int salary;
}; 

//经理类
class Manager:public Employee
	{
	public:
		//编号 姓名 
		Manager(int _id, string _name):Employee(_id, _name){
		
		}
		
		void setSalary(){
			salary=8000;
		}
		

};

//技术人员

class Technician:public Employee
	{
	public:
		//编号 姓名 
		Technician(int _id, string _name, int _time):Employee(_id, _name){
			time=_time;
		}
		
		void setSalary(){
			salary=100*time;
		}
		
	public:
	 int time; 
}; 

//销售员
class Salesman:public Employee{
	public:
		//编号 姓名 
		Salesman(int _id, string _name, int _sale):Employee(_id, _name){
		sale=_sale;
		}
		
		void setSalary(){
			salary=0.04*sale;
		}
		
public:
 int sale; 
};
 
 //销售经理 
 
 class Salesmanager:public Employee
 	{
	public:
		//编号 姓名 
		Salesmanager(int _id, string _name, int _sale):Employee(_id, _name){
			sale=_sale;
		}
		
		void setSalary(){
			salary=0.005*sale;
		}
		
	public:
 		int sale; 
};

void getInfo(Employee e){
		
		cout<<"编号："<<e.id<<endl; 
		cout<<"姓名："<<e.name<<endl;
		cout<<"工资："<<e.salary<<endl;


	}

int main(){
	

	Manager manager(1,"fcx");
	Technician technician(2,"ly",48);
	Salesman salesman(3,"hb",7000);
	Salesmanager salesmanager(4,"bxl",10000); 
	
	manager.setSalary();
 	technician.setSalary();
	salesman.setSalary();
	salesmanager.setSalary();
	
	getInfo(manager);
	getInfo(technician);
	getInfo(salesman);
	getInfo(salesmanager);
	
return 0;
	
}