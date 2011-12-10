#include<iostream>
#include<string>
using namespace std;
class CTempStaff;
class CAdministrator;
class CTeacher;

typedef struct Node1
{
   CTempStaff *staffPtr;
   struct Node1* next; 	
}node1,*nodePtr1;

typedef struct Node2
{
   CAdministrator *staffPtr;
   struct Node2* next; 	
}node2,*nodePtr2;

typedef struct Node3
{
   CTeacher *staffPtr;
   struct Node3 *next; 	
}node3,*nodePtr3;

////CStaff�� 
class CStaff
{
   private:
     string number;
	 string name;
	 //double salary;
	 int  sex;
	 int serviceYears;
	 
   public:
     CStaff();
	 void setNum();
	 string getNum();
     void setName();
	 string getName();
	 void setSex();
	 int getSex();
	 void setServiceYears();
     int getServiceYears();
     virtual double GetSalary(){return 0;}
};

/////CTempStaff�� 
class CTempStaff :public CStaff
{
  private:
      double fixedSalary;
  public:
      CTempStaff();
      void setFixedSalary();
	  double GetSalary();
  	  friend std::ostream& operator <<(std::ostream &cout,CTempStaff &a);///
};

///CAdministrator�� 
class CAdministrator :public CStaff
{
	private:
        int position ;  //ְ�� 0:һ����Ա1:�Ƽ�������Ա
        double basicSalary;
        double serviceYearsSalary;
        double positionSalary;
	public:
	    CAdministrator();
		void setPosition();
        int getPosition();
        void setBasicSalary();
        double getBasicSalary();
        void setServiceYearsSalary();
        double getServiceYearsSalary();
        void setPositionSalary();
        double getPositionSalary();
        double GetSalary();
       friend std::ostream& operator <<(std::ostream &cout,CAdministrator &a);///
};

/////CTeacher�� 
class CTeacher :public CStaff
{ 
	private:
        int kind ;//���0:��ʦ1�������ڼ����� 2������ 
		int Time;//ѧʱ�� 
        int mosterNum;//˶ʿ�� �����о�������
		int doctorNum;// ��ʿ�� �����о�������
		double basicSalary;//�������� 
        double serviceYearsSalary;//���乤�� 
        double moneyTime;//Ԫ/��ʱ 
        double moneyMoster;//Ԫ/��  ˶ʿ�� �����о���
        double moneyDoctor;//Ԫ/�� ��ʿ�� �����о���
	public:
	    CTeacher();
		void setKind();
        int getKind();
        void setTime();
        int getTime();
		void setMosterNum();
        int getMosterNum();
		void setDoctorNum();
        int getDoctorNum();
        void setBasicSalary();
        double getBasicSalary();
        void setServiceYearsSalary();
        double getServiceYearsSalary();
        void setMoneyTime();
        double getMoneyTime();
        void setMoneyMoster();
		double getMoneyMoster();
		void setMoneyDoctor();
		double getMoneyDoctor();
        double GetSalary();
        friend std::ostream& operator <<(std::ostream&cout,CTeacher&a);///		
};
