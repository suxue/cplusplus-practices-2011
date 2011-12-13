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
 	cout<<"�������ְ������Ա��"<<t1.GetName()<<"���µĹ���ʱ����";
 	int wt;
 	cin>>wt;
 	t1.SetworkHours(wt);
 	t1.pay();
 	
 	cout<<"���������۾���"<<sm1.GetName()<<"����Ͻ���ű��µ������ܶ";
 	float s;
 	cin>>s;
 	sm1.Setsales(s);
 	sm1.pay();
 	
 	cout<<"����������Ա��"<<s1.GetName()<<"���µ����۶" ;
	 cin>>s;
	 s1.Setsales(s);
	 s1.pay();
	 
	 cout<<"��ţ�"<<m1.GetindividualEmpNo()<<m1.GetName()<<"���¹��ʣ�"<<m1.GetaccumPay()<<endl;
	 cout<<"��ţ�"<<t1.GetindividualEmpNo()<<t1.GetName()<<"���¹��ʣ�"<<t1.GetaccumPay()<<endl;
	 cout<<"��ţ�"<<sm1.GetindividualEmpNo()<<sm1.GetName()<<"���¹��ʣ�"<<sm1.GetaccumPay()<<endl;
	 cout<<"��ţ�"<<s1.GetindividualEmpNo()<<s1.GetName()<<"���¹��ʣ�"<<s1.GetaccumPay()<<endl;
	 
	 system("pause");
}
