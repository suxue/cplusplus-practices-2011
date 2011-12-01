//============================================================================
// Name        : test2.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CStaff{  //职工
private:
int ID;
string name;
double age;
char sex;
double wage;
public:
CStaff(int ID=0,string name="",char sex=' '){
	this->ID=ID;
	this->name=name;
	this->sex=sex;
}
int GetNo(){
return ID;
}
void SetNo(int No){
ID=No;
}
void SetName(string name){
this->name=name;
}
string GetName(){
return name;
}
void SetSex(char sex){
this->sex=sex;
}
char GetSex(){
return sex;
}
void SetServiceYears(double serviceyears){
age=serviceyears;
}
double GetServiceYears(){
return age;
}
double GetSalary(){
return wage=2000;
}
};

class CTempStaff:public CStaff{  //临时员工
public:
	CTempStaff(int ID=0,string name="",char sex=' '):CStaff(ID,name,sex){
	}
double GetSalary(){
return 1500;
}
friend ostream& operator<<(ostream& os,CTempStaff& C);
};
ostream& operator<<(ostream& os,CTempStaff& C)          //重载输出流(此处有错误)
{
 os<<"ID: "<<C.GetNo()<<'\t'<<"Name: "<<C.GetName()<<'\t'<<"Sex: "<<C.GetSex()<<'\t'<<"Salary: "<<C.GetSalary()<<endl;
 return os;
}

class CAdministrator:public CStaff{  //行政人员
private:
	double jobs;
public:
	CAdministrator(int ID=0,string name="",char sex=' ',double age=0,double jobs=0):CStaff(ID,name,sex){
		CStaff::SetServiceYears(age);
		this->jobs=jobs;
	}
double GetSalary(){
	return 2500+CStaff::GetServiceYears()*100+200*jobs;
}
double GetJobs(){
	return jobs;
}
friend ostream& operator<<(ostream& os,CAdministrator& C);
};
ostream& operator<<(ostream& os,CAdministrator& C)          //重载输出流(此处有错误)
{
 os<<"ID: "<<C.GetNo()<<'\t'<<"Name: "<<C.GetName()<<'\t'<<"Sex: "<<C.GetSex()<<'\t'<<"Salary: "<<C.GetSalary()<<endl;
 return os;
}
class chief:public CAdministrator{  //科长
public:
chief(int ID=0,string name="",char sex=' ',double age=0,double jobs=0):CAdministrator(ID,name,sex,age,jobs){
}
	double GetSalary(){
		return 3000+CStaff::GetServiceYears()*200+400*CAdministrator::GetJobs();
	}
friend ostream& operator<<(ostream& os,chief& C);
};
ostream& operator<<(ostream& os,chief& C)          //重载输出流(此处有错误)
{
 os<<"ID: "<<C.GetNo()<<'\t'<<"Name: "<<C.GetName()<<'\t'<<"Sex: "<<C.GetSex()<<'\t'<<"Salary: "<<C.GetSalary()<<endl;
 return os;
}

class CTeacher:public CStaff{  //教师
private:
int time;
public:
CTeacher(int ID=0,string name="",char sex=' ',double age=0,int time=0):CStaff(ID,name,sex){
	CStaff::SetServiceYears(age);
	this->time=time;
}
double GetSalary(){
return 2000+CStaff::GetServiceYears()*100+time*20;
}
int GetTime(){
	return time;
}
friend ostream& operator<<(ostream& os,CTeacher& C);
};
ostream& operator<<(ostream& os,CTeacher& C)
{
 os<<"ID: "<<C.GetNo()<<'\t'<<"Name: "<<C.GetName()<<'\t'<<"Sex: "<<C.GetSex()<<'\t'<<"Salary: "<<C.GetSalary()<<endl;
 return os;
}

class professor:public CTeacher{  //教授或副教授
private:
	int masters;
public:
professor(int ID=0,string name="",char sex=' ',double age=0,int time=0,int masters=0):CTeacher(ID,name,sex,age,time){

	this->masters=masters;
}
double GetSalary(){
return CTeacher::GetSalary()+CTeacher::GetTime()*30+masters*100;
}
int GetMasters(){
	return masters;
}
friend ostream& operator<<(ostream& os,professor& C);
};
ostream& operator<<(ostream& os,professor& C)
{
 os<<"ID: "<<C.GetNo()<<'\t'<<"Name: "<<C.GetName()<<'\t'<<"Sex: "<<C.GetSex()<<'\t'<<"Salary: "<<C.GetSalary()<<endl;
 return os;
}

class doctorSupervisor:public professor{   //博导
private:
	int doctors;
public:
	doctorSupervisor(int ID=0,string name="",char sex=' ',double age=0,int time=0,int masters=0,int doctors=0):professor(ID,name,sex,age,time,masters){
		this->doctors=doctors;
	}
	double GetSalary(){
	return CTeacher::GetSalary()+CTeacher::GetTime()*50+professor::GetMasters()*200+doctors*400;
	}
	friend ostream& operator<<(ostream& os,doctorSupervisor& C);
};
ostream& operator<<(ostream& os,doctorSupervisor& C)
{
 os<<"ID: "<<C.GetNo()<<'\t'<<"Name: "<<C.GetName()<<'\t'<<"Sex: "<<C.GetSex()<<'\t'<<"Salary: "<<C.GetSalary()<<endl;
 return os;
}

int main(){
CTempStaff tempstaff(001,"liuxiang",'M'); //临时人员
CAdministrator administrator(002,"huangyuan",'W',8); //一般行政人员
CAdministrator manager(003,"lizhigang",'W',8,5); //科级以上
CTeacher teacher(004,"liaoyong",'M',2,20); //讲师
professor profess(005,"qibinbin",'W',1,15,5); //教授或副教授
doctorSupervisor superdoctor(006,"heyafeng",'M',3,10,3,1); //博导
chief leader(007,"lixuemei",'W',8,6); //科级以上行政管理
cout<<tempstaff;
cout<<administrator;
cout<<manager;
cout<<teacher;
cout<<profess;
cout<<superdoctor;
cout<<leader;
return 0;
}

