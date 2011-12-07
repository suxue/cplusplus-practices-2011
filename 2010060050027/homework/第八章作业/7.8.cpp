#include<iostream>
#include<stdio.h>
#define BasicSal 8000
using namespace std;

int Sales=500000;

class employee
{
      private:
              char No[20],Name[20];
              int salary;
      public:
             employee(char *_No,char *_Name)
             {
               strcpy(No,_No);
               strcpy(Name,_Name);
             }
             int GetSal();
};


class TechMan:public employee
{
      private:
              int hours;
      public:
             TechMan(char *_No,char *_Name,int _hours):employee(_No,_Name)
             {
               hours=_hours;
               printf("TechMan: %s %s hours: %d\n",_No,_Name,_hours);
               printf("Salary: %d\n",GetSal());
             }
             int GetSal()
             {
               return 100*hours;
             }
};

class Manager:public employee
{
      public:
             Manager(char *_No,char *_Name):employee(_No,_Name)
             {
               printf("Manager: %s %s\n",_No,_Name);
               printf("Salary: %d\n",GetSal());
             }
             int GetSal()
             {
               return BasicSal;
             }
};

class SalesMan:public employee
{
      public:
             SalesMan(char *_No,char *_Name):employee(_No,_Name)
             {
               printf("SalesMan: %s %s\n",_No,_Name);
               printf("Salary: %d\n",GetSal());
             }
             int GetSal()
             {
               return Sales*4/100;
             }
};

class SalesManager:public employee
{
      public:
             SalesManager(char *_No,char *_Name):employee(_No,_Name)
             {
               printf("SalesManager: %s %s\n",_No,_Name);
               printf("Salary: %d\n",GetSal());
             }
             int GetSal()
             {
               return 5000+Sales*5/1000;
             }
};

int main()
{
  cout<<"当前该地区月销售额为"<<Sales<<endl; 
  Manager man1("0012","DongDawei");
  TechMan man2("0022","LiHua",160);
  SalesMan man3("0102","XiaoMao");
  SalesManager man4("1122","MaoMao");
  while(2);
  
    
    
    
    
}
