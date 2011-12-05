#include<iostream>
using namespace std;
class employee{
	public:
	int Salary;
	long IDnum;
	char Name;
	int salarycount();
	~employee();
};
class manager:public employee{
    public:
	int Salary;
	long IDnum;
	char Name;
	manager(int sa,long id,char n){
	    Salary=sa;
	    IDnum=id;
	    Name=n;
	}
	int salarycount(){
		return Salary;
	}
};
class technician:public employee{
    public:
	int Salary;
	long IDnum;
	int Time;
	char Name;
	technician(int time,long id,char n){
		Time=time;
		IDnum=id;
		Name=n;
	}
	int salarycount(){
		return Salary=100*Time;
	}
};
class salesman:public employeee {
    public:
	int Salary;
	long IDnum,soldcount;
	char Name;
	salesman(int sold,long id,char n){
		soldcount=sold;
		IDnum=id;
		Name=n;
	}
	int salarycount(){
		Salary=soldcount*0.04;
		return Salary;
	}
};
class salesmanager:public employee{
    public:
	int Salary,IDnum,soldcount;
	char *Name;
	salesmanager(int sold,long id,char *n){
		soldcount=sold;
		IDnum=id;
		Name=n;
	}
	int salarycount(){
		Salary=soldcount*0.00005+5000;
		return Salary;
	}
};
int main(){
	int i;
    cout<<"Please input the type that you want to calculate!"<<endl;
    cout<<"1.manager"<<endl;
    cout<<"2.techician"<<endl;
    cout<<"3.salesman"<<endl;
    cout<<"4.salesmanger"<<endl;
    cin>>i;
    switch(i){
   	    int t,sa;
    	long id;
    	char n;
    	case 1:
    	manager m1;
    	cout<<"please input name ID and Salary."<<endl;
    	cin>>n;
    	cin>>id;
    	cin>>sa;
    	m1(sa,id,n);
    	m1.salarycount();
    	cout<<"his name is:"<<m1.Name<<endl;
    	cout<<"his ID is :"<<m1.IDnum<<endl;
    	cout<<"his salary is :"<<m1.Salary<<endl;
    	break;
    	
		case 2:
    	technician m2;
    	cout<<"please input name. ID and work time."<<endl;
    	cin>>n;
    	cin>>id;
    	cin>>t;
    	m2(t,id,*n);
    	m2.salarycount();
    	cout<<"his name is:"<<m2.Name<<endl;
    	cout<<"his ID is :"<<m2.IDnum<<endl;
    	cout<<"his salary is :"<<m2.Salary<<endl;
    	break;
    	
		case 3:
    	salesman m3;
    	cout<<"please input name. ID and soldcount."<<endl;
    	cin>>n;
    	cin>>id;
    	cin>>t;
    	m3(t,id,*n);
    	m3.salarycount();
    	cout<<"his name is:"<<m3.Name<<endl;
    	cout<<"his ID is :"<<m3.IDnum<<endl;
    	cout<<"his salary is :"<<m3.Salary<<endl;
    	break;
    	
		case 4:
    	salesmanager m4;
    	cout<<"please input name. ID and soldcount of his part!."<<endl;
    	cin>>n;
    	cin>>id;
    	cin>>t;
    	m4(t,id,*n);
    	m4.salarycount();
    	cout<<"his name is:"<<m4.Name<<endl;
    	cout<<"his ID is :"<<m4.IDnum<<endl;
    	cout<<"his salary is :"<<m4.Salary<<endl;
    	break;
    }
    return 0;
}