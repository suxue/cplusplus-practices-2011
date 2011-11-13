//��дһ������ʵ��С�͹�˾���ʹ���
 #include<iostream>
  using namespace std;
  class Employee
  {
  	private:
  	      unsigned int number;//��š� 
  	      string name;//������ 
  	      float salary;//ְԱнˮ������Ϊ��нҲ����Ϊ��ɻ���ʱн�� 
   public:
         Employee(unsigned int n=0,string s="xx",float sa=0)
         {
         	  number=n;
         	  name=s;
         	  salary=sa;
         }
         int getSalary()
         {
         	 return salary;
         }
         virtual ~Employee(){}
         void changeSalary(float n)
         {
         	 salary=salary+n;//��нˮ���Ӽ��� 
         }
         virtual float countSalary()=0;//������н�����ء� 
         virtual void showSalary()=0;//��ӡ��н�� 
  };
  class Manager:public Employee
  {
  	
  public:
  	  Manager(unsigned int nM=0,string sM="xxx",float saM=8000.0):Employee(nM,sM,saM)
  	  {
  	  	   ;
  	  }
  	  float countSalary()
  	  {
  	  	   return getSalary();//������н; 
  	  }
  	  void showSalary()
  	  {
  	  	   cout<<"�������нΪ"<<countSalary()<<"Ԫ"<<endl;
  	  }
  };
  const float WORKTIME=8;
  class Technician:public Employee
  {
  	
   public:
  	     Technician(unsigned int nT=0,string sT="xx",float saT=100):Employee(nT,sT,saT)
  	     {
     	  	
     	  }
     	  float countSalary()
     	  {
     	  	
  	     	  return 30*WORKTIME*getSalary();
  	     }
  	     void showSalary()
  	     {
     	  	 cout<<"������Ա��нΪ"<<countSalary()<<"Ԫ"<<endl;
     	  }
  };
  const float SALESMONTH=100000;
  class Salesman:public Employee
  {
  	private:
  	   float pusherMoney;
  	  
  public:
       Salesman(unsigned int nS=0,string sT="xx",float sS=0,float pushM=0.04):Employee(nS,sT,sS)
       {
       	  pusherMoney=pushM ;
       }
       float countSalary()
       {
       	  return pusherMoney*SALESMONTH;
       }
       void showSalary()
       {
       	  cout<<"����Ա��нΪ"<<countSalary()<<"Ԫ"<<endl;
       }
  };
  const float SALESMONTHM=1000000;
  class SalesManager:public Employee
  {
  	  private:
  	        
  	        float pushMoney;
     public:
           SalesManager(unsigned int nSM=0,string sSM="xx",float saSM=5000.0,float pushM=0.005):Employee(nSM,sSM,saSM)
           {
           	   pushMoney=pushM;
           }
          float countSalary()
           {
           	   return pushMoney*SALESMONTHM+getSalary();
           }
           void showSalary()
           {
           	   cout<<"����������нΪ:"<<countSalary()<<"Ԫ"<<endl;
           }
  };
  int main()
  {
  	 Manager m;
  	 m.showSalary();
  	 
  	 Technician t;
  	 t.showSalary();
  	 
  	 Salesman sman(0,"xxx");
  	 sman.showSalary();
  	 
  	 SalesManager st;
  	 st.showSalary();
  }
  
  
  