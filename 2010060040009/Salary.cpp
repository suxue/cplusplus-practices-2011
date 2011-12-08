#include <iostream>
using namespace std;
#define BasicSalary 8000; //基本工资 
#define StaticPay 5000;	//临时员工工资
#define K 1; //科级职务工资 
#define J 2;	//局级职务工资 
#define LM 3; //讲师课时费 
#define AM 4; //副教授课时费 
#define PM 5; //教授课时费 
#define DM 6;  //博导课时费
#define MB 7; //硕士生补助 
#define DB 8; //博士生补助 
class CStaff{
	protected:
		char name[20];
		char Sex;
		int No;
		int Salary;
		int ServiceYears;
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
		double GetSalary(){
			return Salary;
		}
		void SetServiceYears(int serviceYears){
			ServiceYears = serviceYears;
		}
		int GetServiceYears(){
			return ServiceYears;
		}
		void SetSex(char sex)
        {
            Sex = sex;
        }
        char GetSex()
        {
            return Sex;
        }
};

class CTempStaff: public CStaff 
{
	protected:
		int monthlyPay;
	public:
		CTempStaff(){  
			monthlyPay=StaticPay;
		}
		void pay(){
			Salary=monthlyPay;
		}
		friend ostream& operator<<(ostream &stream,  CTempStaff& s){
			stream<<"临时人员："<<endl;
    		stream<<"职工号："<<s.GetNo()<<endl;
    		stream<<"姓名："<<s.GetName()<<endl;
    		stream<<"性别："<<s.GetSex()<<endl;
			stream<<"月薪："<<s.GetSalary()<<endl;
			return stream;
		}
};

class CAdministrator:public CStaff
{
    private:
        int duty; //行政人员职务 
    public:
        CAdministrator(){
        	duty = 0;
        }
        void SetDuty(int Duty){
        	duty = Duty ;
        }
        void pay()
        {
    		switch(duty)
    		{	
        		case 0:
        			Salary = ServiceYears*10+BasicSalary;
        			break;
        		case 1:
        			Salary = ServiceYears*10+BasicSalary+K;
					break;        			
        		case 2:
        			Salary = ServiceYears*10+BasicSalary+J;   
					break;     		
    		}
        }
        friend ostream& operator << (ostream& stream, CAdministrator s){
            stream<<"职工号："<<s.GetNo()<<endl;
			stream<<"姓名："<<s.GetName()<<endl;
    		stream<<"性别："<<s.GetSex()<<endl;
    		stream<<"工龄："<<s.GetServiceYears()<<endl;
    		stream<<"月薪："<<s.GetSalary()<<endl;
    		return stream;
        }
};

class CTeacher:public CStaff
{
    private:
        int type;  //教师类型 
		int tclass;  //课时数 
		int postgraduate;  //硕士生数 
		int doctor;  //博士生数 
    public:
        CTeacher(){
        	type = 0;
        	tclass = 0;
        }
        void SetType(int Type){
        	type = Type ;
        }
        void SetTclass(int tclasses){
        	tclass = tclasses;
        }
        void SetPostgraduate(int num){
        	postgraduate = num;
        }
        void SetDoctor(int number){
        	doctor = number;
        }
        void pay()
        {
			switch(type)
			{
				case 0:
					Salary = ServiceYears*10+tclass*LM+BasicSalary;
					break;
				case 1:
					Salary = ServiceYears*10+tclass*AM+postgraduate*MB+BasicSalary;
					break;
				case 2:
					Salary = ServiceYears*10+tclass*PM+postgraduate*MB+BasicSalary;
					break;
				case 3:
					Salary = ServiceYears*10+tclass*DM+postgraduate*MB+doctor*DB+BasicSalary;
					break;
			}
        }
        friend ostream& operator << (ostream& stream, CTeacher s)
		{	
            stream<<"职工号："<<s.GetNo()<<endl;
    		stream<<"姓名："<<s.GetName()<<endl;
    		stream<<"性别："<<s.GetSex()<<endl;
    		stream<<"工龄："<<s.GetServiceYears()<<endl;
    		stream<<"月薪："<<s.GetSalary()<<endl;
    		return stream;
		}
};

int main()
{
    char name[20], sex;
    int No;
    int dif;
    int service_year, salary;
    cout<<"请输入要计算工资的职业（1：临时员工 2：行政人员 3：教师）：" ;
    cin>>dif;
    CTempStaff temp;
    CAdministrator admin;
    CTeacher tea;
    switch(dif)
    {
   		case 1:
   		    //临时人员
    		
    		cout<<"请输入临时人员姓名：";cin>>name;
    		cout<<"请输入临时人员职工号：";cin>>No;
    		cout<<"请输入临时人员性别：";cin>>sex;
    		temp.SetName(name);
    		temp.SetNo(No);
   		 	temp.SetSex(sex);
    		temp.pay();
    		cout<<temp<<endl;
    		break;
    	
    	case 2:
   	 		//行政人员
    		int duty;
   	 		
    		cout<<"请输入行政人员姓名：";cin>>name;
    		cout<<"请输入行政人员职工号：";cin>>No;
    		cout<<"请输入行政人员性别：";cin>>sex;
    		cout<<"请输入行政人员工龄：";cin>>service_year;
    		cout<<"请输入行政人员职务（0：一般 1：科级 2：处级）：";
    		cin>>duty;
			admin.SetName(name);
			admin.SetNo(No);
			admin.SetServiceYears(service_year);
			admin.SetSex(sex); 
			admin.SetDuty(duty);
			admin.pay();
    		cout<<admin<<endl;
    		break;
    	
    	case 3:
 			//教师
		 	int type,tclass, postgraduate, doctor;
			
    		cout<<"请输入教师姓名：";cin>>name;
    		cout<<"请输入教师职工号：";cin>>No;
    		cout<<"请输入教师性别：";cin>>sex;
    		cout<<"请输入教师工龄：";cin>>service_year;
    		cout<<"请输入教师课时：";cin>>tclass;
    		cout<<"请输入教师类型（0：讲师 1：副教授 2：教授 3：博导）：";cin>>type;
    		switch(type)
    		{
    			case 1: case 2:
	    			cout<<"请输入教师硕士生数：";cin>>postgraduate;
	    			tea.SetPostgraduate(postgraduate);
	    			break;
    			case 3:
    				cout<<"请输入教师硕士生数：";cin>>postgraduate;
	    			tea.SetPostgraduate(postgraduate);
 	    			cout<<"请输入教师博士生数：";cin>>doctor;
 	    			tea.SetDoctor(doctor);
	    			break;
    		}
    		tea.SetSex(sex);
    		tea.SetName(name);
    		tea.SetNo(No);
    		tea.SetServiceYears(service_year);
    		tea.SetType(type);
    		tea.SetTclass(tclass);
    		tea.pay();
    		cout<<tea<<endl;
    		break;
   }	
      
    return 0;
}
