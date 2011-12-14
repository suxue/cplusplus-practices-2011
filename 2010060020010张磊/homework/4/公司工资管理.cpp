#include<iostream>
using namespace std;
class employee{
	protected:
	char* name;
	char* No;
	double wage;
	employee(char* name,char* No,double wage){
		this->name=name;
		this->No=No;
		this->wage;
		}
	employee(char* name,char* No){
		this->name=name;
		this->No=No;
		
	}
	employee(){
		this->name=NULL;
		this->No=NULL;
		this->wage=0;
	}
};
class manager:public employee
	{
		
		manager(char* name,char *No){
			this->name=name;
			this->No=No;
			this->wage=8000;
		}
		manager(){
			this->name=NULL;
			this->No=NULL;
			this->wage=0;
		
		}
};
class technician:public employee
	{
		int workhour;
		double wage;
		technician(char* name,char *No,int workhour):
			employee(name,No){
			this->wage=workhour*100;
		}
		technician(){
			this->wage=0;
		}
};
class salesman:public employee
	{
	public:
	salesman(char* name,char* No):employee(name,No){
			cout<<"请输入此月的销售额:";
			double salessum;
			cin>>salessum; 
			this->wage=setwage(salessum);
		}
		salesman(){
			this->wage=0;
		}
	double setwage(double salessum){
			this->wage=0.04*salessum;
			}
};
class salesmanager:public employee
	{
		public:
		salesmanager(char* name,char* No):employee(name,No){
			cout<<"请输入此月的销售额:";
			double salessum;
			cin>>salessum; 
			this->wage=5000+0.005*setwage(salessum);
		}
		salesmanager(){
			this->wage=0;
		}
		double setwage(double salessum){ 
			this->wage=5000+0.005*salessum;
			return this->wage;
		}
};