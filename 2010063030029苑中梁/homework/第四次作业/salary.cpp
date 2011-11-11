#include <iostream>
#include<CString.h>
using namespace std;
class employee{
private:
     long int employee_Number;
     CString employe_name;
public:
      employee(long int a,char b){
      employee_Number=a;
      employe_name=b;}
      void showEmployee(){
      cout<<"employee_Number is"<<endl<<employee_Number<<endl;
      cout<<"employe_name is"<<endl<<employe_name<<endl;}
};
class manager:public employee{
    private:
    int manager_salary;
    public:
    manager(int a,char b):employee(a,b){
    manager_salary=8000;}
    void showManager(){
    cout<<"number is"<<"his work is"<<endl;
    showEmployee();
    cout<<"his salary is:"<<manager_salary<<endl;}
    };
class technician:public employee{
   private:
   int hours;
   double technician_salary;
   public:
   technician(int h,long int a,char b):employee(a,b){
   hours=h;
   technician_salary=100*hours;
   }
    void showTechnician(){
    showEmployee();
    cout<<"his salary is:"<<technician_salary<<endl;}
};
class salesman:public employee{
private:
    double salesman_salary;
    int whole_money;
public:
     salesman(int w,int a,char b):employee(a,b){
     whole_money=w;
     salesman_salary=whole_money*0.04;}
void showSalesman(){
    cout<<"number is"<<"his work is"<<endl;
    showEmployee();
    cout<<"his salary is:"<<salesman_salary<<endl;}
};
class salesmanager:public employee{
private:
      double  salesmanager_salary;
      int whole_money;
public:
       salesmanager(int w,int a,char b):employee(a,b){
       whole_money=w;
       salesmanager_salary=whole_money*0.005+5000;}
void showSalesmanager(){
    cout<<"number is"<<"his work is"<<endl;
    showEmployee();
    cout<<"his salary is:"<<salesmanager_salary<<endl;}
};
int main(){
  cout<<"i am a computer techincian"<<endl;
  technician my(100,1029,'wa');
  my.showTechnician();
  return 0;
}
