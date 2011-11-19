#include<iostream>
#include<string>
using namespace std;

class Employee
{
   private:
     string number;
     string name ;
     double MonthMoney;
   public:
     void SetNumber(string number);
     void GetNumber();
     void SetName(string name);
     void GetName();
     virtual void  CountMonthMoney(){}
     void  SetMonthMoney(double money);
     void  GetMonthMoney();
};
////////////各个派生类 
//manager类 
class  Manager :public Employee
{
	private:
	 double money;
    public:
      void SetMoney(double money)
      {
      	 this->money=money;
      }
      void SetMonthMoney()
      {
     	 Employee::SetMonthMoney(money);
      }
};
//  Technician类 
class  Technician :public Employee
{
	private:
	  double money;
	  int time;
   public:
      void SetTime(int time)
      {
         this->time=time;	
      }
      void  CountMonthMoney()
      {
      	 money=100*time;
      }
      void SetMonthMoney()
      {
     	 Employee::SetMonthMoney(money);
      }
};
// Salesman类 
class  Salesman :public Employee
{
   private:
	  double money;
	  int saleroom;
   public:
      void SetSaleroom(int saleroom)
      {
      	 this->saleroom=saleroom;	
      }
  	  void  CountMonthMoney()
  	  {
	    	money=saleroom*4/100;
      }
      void SetMonthMoney()
      {
     	  Employee::SetMonthMoney(money);
      }
};
// Salesmanager类 
class  Salesmanager :public Employee
{
	private:
	  int fixedMoney;
	  double money;
	  int saleroom;
    public:
      void SetFixedMoney(int fixedMoney)
      {
      	this->fixedMoney=fixedMoney;	
      }
      void SetSaleroom(int saleroom)
      {
  		this->saleroom=saleroom;
      }
  	 void  CountMonthMoney()
   	 {
	    money=fixedMoney+0.5*saleroom/100;	
     }
     void SetMonthMoney()
     {
     	Employee::SetMonthMoney(money);
     }
};

////////main函数 
int main()
{
	string name;
	string number;
	double money;
	int time;
	int saleroom;
	//Employee employee;
    Manager manager;
	Technician technician;
	Salesman salesman;
	Salesmanager salesmanager;
	////输入经理信息 
	cout<<"the name of the manager:"<<endl;
	cin>>name;
	cout<<"the number of the manager:"<<endl;
	cin>>number;
	cout<<"the basic money of the manager:"<<endl;
	cin>>money;
	manager.SetName(name);
	manager.SetNumber(number);
	manager.SetMoney(money);
	manager.CountMonthMoney();
	// //输入技术人员信息 
	cout<<"the name of the technician:"<<endl;
	cin>>name;
	cout<<"the number of the technician:"<<endl;
	cin>>number;
	cout<<"the time of the technician work:"<<endl;
	cin>>time;
	technician.SetName(name);
	technician.SetNumber(number);
	technician.SetTime(time);
	technician.CountMonthMoney();
	////输入销售员信息 
	cout<<"the name of the salesman:"<<endl;
	cin>>name;
	cout<<"the number of the salesman:"<<endl;
	cin>>number;
	cout<<"the saleroom of the salesman:"<<endl;
	cin>>saleroom;
	salesman.SetName(name);
	salesman.SetNumber(number);
	salesman.SetSaleroom(saleroom);
	salesman.CountMonthMoney();	
	////输入销售经理信息 
	cout<<"the name of the salesmanager:"<<endl;
	cin>>name;
	cout<<"the number of the salesmanager:"<<endl;
	cin>>number;
	cout<<"the basic money of the salesmanager:"<<endl;
	cin>>money;
	cout<<"the sum saleroom of the salesmanager:"<<endl;
	cin>>saleroom;
	salesmanager.SetName(name);
	salesmanager.SetNumber(number);
	salesmanager.SetSaleroom(saleroom);
	salesmanager.CountMonthMoney();	
	////输出经理信息 
	cout<<'\n'<<"the infomation:"<<endl;
	cout<<"manager:"<<endl;
	manager.GetName();
    manager.GetNumber();
	manager.GetMonthMoney();
	////输出技术人员信息 
	cout<<"technician:"<<endl;
	technician.GetNumber();
	technician.GetMonthMoney();
	////输出销售员信息 
	cout<<"salesman:"<<endl;
    salesman.GetNumber();
	salesman.GetMonthMoney();
	////输出销售经理信息 
	cout<<"salesmanager:"<<endl;
	salesmanager.GetNumber();
	salesmanager.GetMonthMoney();
	
	system("pause");
}

////////Employee类中函数定义 
void Employee::SetNumber(string number)
{
	this->number=number;
}
void Employee::GetNumber()
{
	cout<<"the number is:"<<number<<endl;
}
void Employee::SetName(string name)
{
	this->name=name;
}
void Employee::GetName()
{
	cout<<"the name is:"<<name<<endl;
}
void  Employee::SetMonthMoney(double money)
{
	MonthMoney=money;
}
void  Employee::GetMonthMoney()
{
    cout<<"the money of a month is:"<<MonthMoney<<endl;
}
