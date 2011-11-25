#include <iostream>
#include<string>
using namespace std;
class cstaff{
private:
      string name;
      string sex;
      int work_Number;
public:
       cstaff(string name,string  sex,int work_Number ){
        this->name=name;
        this->sex=sex;
        this->work_Number=work_Number;
        }
       void getNO(){
       cout<<"work_Number is"<<work_Number<<endl;
       }
       void getName(){
       cout<<"name is"<<name<<endl;
       }
       void getSex(){
       cout<<"the sex is"<<sex<<endl;
       }
       virtual void SetServiceYears(){};
       virtual void GetServiceYears(){};
       virtual void GetSalary(){};
};
class CTempStaff:public cstaff{
    private:
    int salary;
    public:
    CTempStaff(string name,string  sex,int work_Number,int money ):cstaff(name,sex,work_Number){
    salary=money;
    }
    void GetSalary(){
    cout<<"his salary is "<<salary<<endl;
    }
};
class CAdministrator:public cstaff{
private:
      int salary;
      int work_years;
      int base_salary;
      int zhiwu_salary;
      int temp;
public:
       CAdministrator(string name,string  sex,int work_Number,int work_years,int zhiwu_salary,int base_salary ):cstaff(name,sex,work_Number){
       this->zhiwu_salary=zhiwu_salary;
       this->work_years=work_years;
       this->base_salary=base_salary;
       }
       void GetServiceYears(){
       cout<<"ServiceYears"<<work_years<<endl;
       }
       void GetSalary(){
       cout<<"�밴������������"<<endl;
       cout<<"1"<<"һ����Ա"<<endl;
       cout<<"2"<<"�Ƽ�����������Ա"<<endl;
       cin>>temp;
       switch(temp){
       case 1:
       cout<<"����һ����Ա"<<endl;
       salary=work_years*100+base_salary;
       cout<<"the salary is"<<salary<<endl;
       break;
       case 2:
       cout<<"��Ϊ�Ƽ�������Ա"<<endl;
       salary=work_years*100+base_salary+zhiwu_salary;
       cout<<"the salary is"<<salary<<endl;
       break;
       }
       }
};
class CTeacher:public cstaff{
private:
    int salary;
    int base_salary;
    int work_years;
    int class_hours;
    int number_doctor;
    int number_phd;
    int temp;
public:
      CTeacher(string name,string  sex,int work_Number,int work_years,int class_hours,int base_salary,int number_doctor,int number_phd):cstaff(name,sex,work_Number){
      this->class_hours=class_hours;
      this->work_years=work_years;
      this->base_salary=base_salary;
      this->number_doctor= number_doctor;
      this->number_phd=number_phd;
      }
       void GetServiceYears(){
       cout<<"ServiceYears"<<work_years<<endl;
       }
        void GetSalary(){
       cout<<"�밴������������"<<endl;
       cout<<"1"<<"��ʦ"<<endl;
       cout<<"2"<<"�����ڼ�����"<<endl;
       cout<<"3"<<"����"<<endl;
       cin>>temp;
       switch(temp){
           case 1:
           cout<<"���ǽ�ʦ"<<endl;
           salary=base_salary+work_years*100+class_hours*100;
           cout<<"salary is"<<salary<<endl;
           break;
           case 2:
           cout<<"���Ǹ����ڼ�����"<<endl;
           salary=base_salary+work_years*100+class_hours*100+number_doctor*200;
           cout<<"salary is"<<salary<<endl;
           break;
           case 3:
           cout<<"���ǲ���"<<endl;
           salary=base_salary+work_years*100+class_hours*100+number_doctor*200+number_phd*300;
           cout<<"salary is"<<salary<<endl;
       }
       }
};
int main(){
CTempStaff A("huwei","man",100,3000);
A.getNO();
A.getName();
A.getSex();
A.GetSalary();
CAdministrator B("laoye","man",101,10,1000,1000);
B.getNO();
B.getName();
B.getSex();
B.GetSalary();
CTeacher C("yuxiang","man",102,20,30,1500,3,0);
C.getNO();
C.getName();
C.getSex();
C.GetSalary();
return 0;
}
