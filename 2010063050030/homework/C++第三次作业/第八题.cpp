#include<iostream>
#include<string>
using namespace std;
class employee{
public:
	int number;
	string name;
	employee(string name,int number){
		this->name=name;
		this->number=number;
	}
	void getData(){
		cout<<"name:"<<name<<'\t'<<"number:"<<number;
	}
};
class manager:public employee{
public:
	manager(string name,int number):employee(name,number){}
	double salary(){
		return 8000;
	}
};
class technician:public employee{
private:
	double worktime;
public:
	technician(string name,int number,double worktime):employee(name,number){
		this->worktime=worktime;
	}
	double salary(){
		return 100*worktime;
	}	
};
class salesman:public employee{
private:
	double total_sale;
public:
	salesman(string name,int number,double total_sale):employee(name,number){
		this->total_sale=total_sale;
	}
	double salary(){
		return total_sale*0.04;
	}
};
class salesmanager:public employee{
private:
	double total_sale;
public:
		salesmanager(string name,int number,double total_sale):employee(name,number){
			this->total_sale=total_sale;
		}
	double  salary(){
		return 5000+0.005*total_sale;
	}
};
int main(){
	manager A("高哥",11);
	technician B("小明",12,120);
	salesman C("小刚",13,120000);
	salesmanager D("小强",16,120000);
    A.getData();
    cout<<'\t'<<"salary:"<<A.salary()<<endl;
    B.getData();
    cout<<'\t'<<"salary:"<<B.salary()<<endl;
    C.getData();
    cout<<'\t'<<"salary:"<<C.salary()<<endl;
    D.getData();
    cout<<'\t'<<"salary:"<<D.salary()<<endl;
	return 0;	
}
