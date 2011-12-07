#include <iostream>
#include <string.h>
using namespace std; 

//ʵ�ּ򵥹��ʹ���

//������� ְԱ
class Employee{
	public:
		//��� ���� 
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

//������
class Manager:public Employee
	{
	public:
		//��� ���� 
		Manager(int _id, string _name):Employee(_id, _name){
		
		}
		
		void setSalary(){
			salary=8000;
		}
		

};

//������Ա

class Technician:public Employee
	{
	public:
		//��� ���� 
		Technician(int _id, string _name, int _time):Employee(_id, _name){
			time=_time;
		}
		
		void setSalary(){
			salary=100*time;
		}
		
	public:
	 int time; 
}; 

//����Ա
class Salesman:public Employee{
	public:
		//��� ���� 
		Salesman(int _id, string _name, int _sale):Employee(_id, _name){
		sale=_sale;
		}
		
		void setSalary(){
			salary=0.04*sale;
		}
		
public:
 int sale; 
};
 
 //���۾��� 
 
 class Salesmanager:public Employee
 	{
	public:
		//��� ���� 
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
		
		cout<<"��ţ�"<<e.id<<endl; 
		cout<<"������"<<e.name<<endl;
		cout<<"���ʣ�"<<e.salary<<endl;


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