//��дһ������ʵ��С�͹�˾���ʹ���
#include<iostream>
using namespace std;
class Employee{
	private:
  	      unsigned int number; 
  	      string name; 
  	      float salary;
	public:
          int getSalary(){
         	 return salary;
         }
		 Employee(unsigned int c=0,string a="xx",float b=0){
         	  number=c;
         	  name=a;
         	  salary=b;
         }
  	     virtual ~Employee(){
		   			}
         void changeSalary(float c){
         	 salary=salary+c;
		  }
         virtual float countSalary()=0; 
         virtual void showSalary()=0;
  };
  class Manager:public Employee{
  	
  public:
  	  Manager(unsigned int cM=0,string aM="xxx",float bM=8000.0):Employee(cM,aM,bM){
  	  	   ;}
  	  float countSalary(){
  	  	   return getSalary();
  	  }
  	  void showSalary(){
  	  	   cout<<"�������нΪ"<<countSalary()<<"Ԫ"<<endl;
  	  }
  };
  const float WORKTIME=8;
  class Technician:public Employee{
  	
   public:
  	     Technician(unsigned int cT=0,string aT="xx",float bT=100):Employee(cT,aT,bT){
     	  	
     	  }
     	  float countSalary(){
     	  	
  	     	  return 30*WORKTIME*getSalary();
  	     }
  	     void showSalary(){
     	  	 cout<<"������Ա��нΪ"<<countSalary()<<"Ԫ"<<endl;
     	  }
  };
  const float SALESMONTH=100000;
  class Salesman:public Employee{
  	private:
  	   float pusherMoney;
  	  
  public:
       Salesman(unsigned int cS=0,string aT="xx",float aS=0,float pushM=0.04):Employee(cS,aT,aS){
       	  pusherMoney=pushM ;
       }
       float countSalary(){
       	  return pusherMoney*SALESMONTH;
       }
       void showSalary(){
       	  cout<<"����Ա��нΪ"<<countSalary()<<"Ԫ"<<endl;
       }
  };
  const float SALESMONTHM=1000000;
  class SalesManager:public Employee{
  	  private:
  	        
  	        float pushMoney;
     public:
           SalesManager(unsigned int cSM=0,string aSM="xx",float bSM=5000.0,float pushM=0.005):Employee(cSM,aSM,bSM){
           	   pushMoney=pushM;
           }
          float countSalary(){
           	   return pushMoney*SALESMONTHM+getSalary();
           }
           void showSalary(){
           	   cout<<"����������нΪ:"<<countSalary()<<"Ԫ"<<endl;
           }
};
  int main(){
  	 Manager m;
  	 m.showSalary();
  	 
  	 Technician t;
  	 t.showSalary();
  	 
  	 Salesman sman(0,"xxx");
  	 sman.showSalary();
  	 
  	 SalesManager st;
  	 st.showSalary();
}
  
  
  