#include <iostream>
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
	void Setname(char *);
	char * Getname();
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
     int employee::employeeNo=1000;
     employee::employee()
     {
     	
     	individualEmpNo=employeeNo++;
     	accumPay=0.0;
     }
     void employee::pay()
     {
     	
     }
     void employee::Setname(char* names)
     {
     	strcpy(name,names);
     }
     char* employee::Getname()
     {
     	return name;
     }
     int employee::GetindividualEmpNo()
     {
     	return individualEmpNo;
     }
     double employee::GetaccumPay()
     {
     	return accumPay;
     }
     technician::technician()
     {
     	hourlyRate=100;
     }
     void technician::SetworkHours(int wh)
     {
     	workHours=wh;
     }
     void technician::pay()
     {
     	accumPay=hourlyRate*workHours;
     }
     salesman::salesman()
     {
     	CommRate=0.04;
     }
     void salesman::Setsales(double sl)
     {
     	sales=sl;
     }
     void salesman::pay()
     {
     	accumPay=salesman*CommRate;
     }
     manager::manager()
     {
     	monthlyPay=8000;
     }
     void manager::pay()
     {
     	accumPay=monthlyPay;
     }
     salesman::salesmanager()
     {
     	monthlyPay=5000;
     	CommRate=0.005
     }
     void salesmananager::pay()
     {
     	accumPay=monthlyPay+CommRate*sales;
     }
     void main()
     {
     	manager m1;
        technician t1;
     	salesmanager sm1;
     	salesman s1;
     	m1.Setname("Dave");
     	t1.Setname("Peter");
     	sm1.Setname("June");
     	s1.Setname("Jerry");
     	m1.pay();
     	cout<<"请输入兼职技术人员"<<t1.Getname()<<"本月的工作时数:";
        int wt;
        cin>>wt;
        t1.SetworkHours(wt);
        t1.pay();
	    cout<<"请输入销售经理"<<sm1.Getname()<<"销售总额:";
	    float s;
	    cin>>s;
	    sm1.Setname(s);
	    sm1.pay();
	    cout<<"请输入销售员"<<s1.Getname()<<"本月的销售额";
		cin>>s;
		s1.Setsales(s);
		s1.pay();  
	    cout<<"编号"<<m1.GetindividualEmpNo()<<m1.Getname()<<"本月工资"<<m1.GetaccumPay()<<endl;
	    cout<<"编号"<<m1.GetindividualEmpNo()<<t1.Getname()<<"本月工资"<<t1.GetaccumPay()<<endl;
	    cout<<"编号"<<m1.GetindividualEmpNo()<<sm1.Getname()<<"本月工资"<<sm1.GetaccumPay()<<endl;
	    cout<<"编号"<<m1.GetindividualEmpNo()<<s1.Getname()<<"本月工资"<<s1.GetaccumPay()<<endl;
	     }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     