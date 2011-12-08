#include <iostream>
using namespace std;
class employee{
	protected:
		char name[20];
		int No;
		double Wage;
	public:
		void pay();
		void SetName(char *names){
			strcpy(name,names);
		}
		char * GetName(){
			return name;
		}
		void SetNo(int Number){
			No=Number;
		}
		int GetNo(){
			return No;
		}
		double GetWage(){
			return Wage;
		}
};
class manager:virtual public employee 
{
	protected:
		double monthlyPay;
	public:
		manager(){
			monthlyPay=8000;
		}
		void pay(){
			Wage=monthlyPay;
		}
};
class technician: public employee
{
	private:
		double hourlyPay;
		int workHours;
	public:
		technician(){
			hourlyPay=100;
		}
		void SetworkHours(int wH){
			workHours=wH;
		}
		void pay(){
			Wage=hourlyPay*workHours;
		}
};
class saleman:virtual public employee
{
	protected:
		double Percent;
		double sales;
	public:
		saleman(){
			Percent=0.04;
		}
		void Setsales(double ss){
			sales=ss;
		}
		void pay(){
			Wage=sales*Percent;
		}
};
class salemanager: public manager , public saleman
{
	public:
		salemanager(){
			monthlyPay=5000;
			Percent=0.005;
		}
		void pay(){
			Wage=monthlyPay+Percent*sales;
		}
};

int main()
{
	manager m1;
	technician t1;
	saleman s1;
	salemanager sm1;
	char name[20];
	int number;
	cout<<"�����뾭�����֣����:";
	cin>>name>>number; 
	m1.SetName(name);
	m1.SetNo(number);
	cout<<"�����뼼����Ա���֣����:";
	cin>>name>>number; 
	t1.SetName(name);
	t1.SetNo(number);
	cout<<"����������Ա���֣����:";
	cin>>name>>number; 
	s1.SetName(name);
	s1.SetNo(number);
	cout<<"���������۾������֣����:";
	cin>>name>>number; 
	sm1.SetName(name);
	sm1.SetNo(number);

	m1.pay();

	cout<<"�����뼼����Ա"<<t1.GetName()<<"���¹���ʱ����";
	int h;
	cin>>h;
	t1.SetworkHours(h);
	t1.pay();
	
	cout<<"����������Ա"<<s1.GetName()<<"�������۶�:";
	double s;
	cin>>s;
	s1.Setsales(s);
	s1.pay();
	
	cout<<"���������۾���"<<sm1.GetName()<<"�������۶";
	cin>>s;
	sm1.Setsales(s);
	sm1.pay();
	
	cout<<m1.GetName()<<"���¹��ʣ�"<<m1.GetWage()<<endl; 
	cout<<t1.GetName()<<"���¹��ʣ�"<<t1.GetWage()<<endl; 
	cout<<s1.GetName()<<"���¹��ʣ�"<<s1.GetWage()<<endl; 
	cout<<sm1.GetName()<<"���¹��ʣ�"<<sm1.GetWage()<<endl; 
	
	return 0;
}
