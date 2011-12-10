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

////CStaff类 
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

/////CTempStaff类 
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

///CAdministrator类 
class CAdministrator :public CStaff
{
	private:
        int position ;  //职务 0:一般人员1:科级以上人员
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

/////CTeacher类 
class CTeacher :public CStaff
{ 
	private:
        int kind ;//类别0:讲师1：副教授及教授 2：博导 
		int Time;//学时数 
        int mosterNum;//硕士生 所带研究生人数
		int doctorNum;// 博士生 所带研究生人数
		double basicSalary;//基本工资 
        double serviceYearsSalary;//工龄工资 
        double moneyTime;//元/课时 
        double moneyMoster;//元/人  硕士生 所带研究生
        double moneyDoctor;//元/人 博士生 所带研究生
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
