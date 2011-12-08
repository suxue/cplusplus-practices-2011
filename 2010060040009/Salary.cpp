#include <iostream>
using namespace std;
#define BasicSalary 8000; //�������� 
#define StaticPay 5000;	//��ʱԱ������
#define K 1; //�Ƽ�ְ���� 
#define J 2;	//�ּ�ְ���� 
#define LM 3; //��ʦ��ʱ�� 
#define AM 4; //�����ڿ�ʱ�� 
#define PM 5; //���ڿ�ʱ�� 
#define DM 6;  //������ʱ��
#define MB 7; //˶ʿ������ 
#define DB 8; //��ʿ������ 
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
			stream<<"��ʱ��Ա��"<<endl;
    		stream<<"ְ���ţ�"<<s.GetNo()<<endl;
    		stream<<"������"<<s.GetName()<<endl;
    		stream<<"�Ա�"<<s.GetSex()<<endl;
			stream<<"��н��"<<s.GetSalary()<<endl;
			return stream;
		}
};

class CAdministrator:public CStaff
{
    private:
        int duty; //������Աְ�� 
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
            stream<<"ְ���ţ�"<<s.GetNo()<<endl;
			stream<<"������"<<s.GetName()<<endl;
    		stream<<"�Ա�"<<s.GetSex()<<endl;
    		stream<<"���䣺"<<s.GetServiceYears()<<endl;
    		stream<<"��н��"<<s.GetSalary()<<endl;
    		return stream;
        }
};

class CTeacher:public CStaff
{
    private:
        int type;  //��ʦ���� 
		int tclass;  //��ʱ�� 
		int postgraduate;  //˶ʿ���� 
		int doctor;  //��ʿ���� 
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
            stream<<"ְ���ţ�"<<s.GetNo()<<endl;
    		stream<<"������"<<s.GetName()<<endl;
    		stream<<"�Ա�"<<s.GetSex()<<endl;
    		stream<<"���䣺"<<s.GetServiceYears()<<endl;
    		stream<<"��н��"<<s.GetSalary()<<endl;
    		return stream;
		}
};

int main()
{
    char name[20], sex;
    int No;
    int dif;
    int service_year, salary;
    cout<<"������Ҫ���㹤�ʵ�ְҵ��1����ʱԱ�� 2��������Ա 3����ʦ����" ;
    cin>>dif;
    CTempStaff temp;
    CAdministrator admin;
    CTeacher tea;
    switch(dif)
    {
   		case 1:
   		    //��ʱ��Ա
    		
    		cout<<"��������ʱ��Ա������";cin>>name;
    		cout<<"��������ʱ��Աְ���ţ�";cin>>No;
    		cout<<"��������ʱ��Ա�Ա�";cin>>sex;
    		temp.SetName(name);
    		temp.SetNo(No);
   		 	temp.SetSex(sex);
    		temp.pay();
    		cout<<temp<<endl;
    		break;
    	
    	case 2:
   	 		//������Ա
    		int duty;
   	 		
    		cout<<"������������Ա������";cin>>name;
    		cout<<"������������Աְ���ţ�";cin>>No;
    		cout<<"������������Ա�Ա�";cin>>sex;
    		cout<<"������������Ա���䣺";cin>>service_year;
    		cout<<"������������Աְ��0��һ�� 1���Ƽ� 2����������";
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
 			//��ʦ
		 	int type,tclass, postgraduate, doctor;
			
    		cout<<"�������ʦ������";cin>>name;
    		cout<<"�������ʦְ���ţ�";cin>>No;
    		cout<<"�������ʦ�Ա�";cin>>sex;
    		cout<<"�������ʦ���䣺";cin>>service_year;
    		cout<<"�������ʦ��ʱ��";cin>>tclass;
    		cout<<"�������ʦ���ͣ�0����ʦ 1�������� 2������ 3����������";cin>>type;
    		switch(type)
    		{
    			case 1: case 2:
	    			cout<<"�������ʦ˶ʿ������";cin>>postgraduate;
	    			tea.SetPostgraduate(postgraduate);
	    			break;
    			case 3:
    				cout<<"�������ʦ˶ʿ������";cin>>postgraduate;
	    			tea.SetPostgraduate(postgraduate);
 	    			cout<<"�������ʦ��ʿ������";cin>>doctor;
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
