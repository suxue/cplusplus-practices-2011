#include<iostream>
using namespace std;
class employee
{
protected:
		  char name[20];
		  int individualEmpNo;
		  double accumPay;
 	      static int employeeNo;
public:
   		  employee();
  		  void pay();
  		  void SetName(char * );
  		  char * GetName();
  		  int GetindividualEmpNo();
  		  double GetaccumPay();
};

class technician:public employee
{
private:
		double hourlyRate;
		int workHours;
public:
	   technician();
	   void SetworkHours(int wh);
	   void pay();
};

class salesman:virtual public employee
{
protected:
		  double CommRate;
		  double sales;
public:
	   salesman();
	   void Setsales(double sl);
	   void pay();
};

class manager:virtual public employee
{
protected:
		  double monthlyPay;
public:
	   manager();
	   void pay();
};

class salesmanager:public manager,public salesman
{
public:
	   salesmanager();
	   void pay();
};

int employee::employeeNo=100;
employee::employee()
{
individualEmpNo=employeeNo++;
accumPay=0.0;
}

void employee::pay(){}
void employee::SetName(char * names){strcpy(name,names);}
char *employee::GetName(){return name;}

int employee::GetindividualEmpNo(){return individualEmpNo;}

double employee::GetaccumPay(){return accumPay;}

technician::technician()
{hourlyRate=100;}

void technician::SetworkHours(int wh)
{workHours=wh;}

void technician::pay()
{accumPay=hourlyRate*workHours;}

salesman::salesman()
{CommRate=0.04;}

void salesman::Setsales(double sl)
{sales=sl;}

void salesman::pay()
{accumPay=sales*CommRate;}

manager::manager()
{monthlyPay=8000;}

void manager::pay()
{accumPay=monthlyPay;}

salesmanager::salesmanager()
{monthlyPay=5000;
CommRate=0.005;
}

void salesmanager::pay()
{
 	 accumPay=monthlyPay+CommRate*sales;
}

int main()
{
 	manager m1;
 	technician t1;
 	salesmanager sm1;
 	salesman s1;
 	m1.SetName("Tom");
 	t1.SetName("John");
 	sm1.SetName("Athony");
 	s1.SetName("Jane");
 	
 	m1.pay();
 	cout<<"请输入兼职技术人员："<<t1.GetName()<<"本月的工作时数：";
 	int wt;
 	cin>>wt;
 	t1.SetworkHours(wt);
 	t1.pay();
 	
 	cout<<"请输入销售经理："<<sm1.GetName()<<"所管辖部门本月的销售总额：";
 	float s;
 	cin>>s;
 	sm1.Setsales(s);
 	sm1.pay();
 	
 	cout<<"请输入推销员："<<s1.GetName()<<"本月的销售额：" ;
	 cin>>s;
	 s1.Setsales(s);
	 s1.pay();
	 
	 cout<<"编号："<<m1.GetindividualEmpNo()<<m1.GetName()<<"本月工资："<<m1.GetaccumPay()<<endl;
	 cout<<"编号："<<t1.GetindividualEmpNo()<<t1.GetName()<<"本月工资："<<t1.GetaccumPay()<<endl;
	 cout<<"编号："<<sm1.GetindividualEmpNo()<<sm1.GetName()<<"本月工资："<<sm1.GetaccumPay()<<endl;
	 cout<<"编号："<<s1.GetindividualEmpNo()<<s1.GetName()<<"本月工资："<<s1.GetaccumPay()<<endl;
	 
	 system("pause");
}
