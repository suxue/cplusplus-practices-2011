#include<iostream>
#include<string>
#include"employeeMoney.h"
using namespace std;

///main函数 
int main()
{
	////输入信息 
	const nodePtr1 h1=(nodePtr1)new(struct Node1);
	h1->next=NULL;
	h1->staffPtr=NULL;
	const nodePtr2 h2=(nodePtr2)new(struct Node2);
	h2->next=NULL;
	h2->staffPtr=NULL;
    const nodePtr3 h3=(nodePtr3)new(struct Node3);
	h3->next=NULL;
	h3->staffPtr=NULL;
	int i,n;
	cout<<"the number of people you want in:"<<endl;
	cin>>n;
	CTempStaff cTempStaff;
	 CAdministrator cAdministrator;
	 CTeacher cTeacher;
	for(int k=0;k<n;k++)
	{	
	   cout<<"in which information(in the number) :1.TempStaff 2.Administrator 3.Teacher"
	   <<endl;
	   cin>>i;
	   switch(i)
	   {
		case 1:
		  {nodePtr1 R1=(nodePtr1)new(struct Node1);
		  
		  R1->staffPtr=&cTempStaff;
		  cout<<"in the information of the TempStaff:"<<endl;
  	      cTempStaff.setName();
  	      cTempStaff.setNum();
  	      cTempStaff.setSex();
  	      cTempStaff.setServiceYears();
  	      cTempStaff.setFixedSalary();
  	      R1->next=h1->next;
  	      h1->next=R1;
  	      //delete R1;
  	      break;}
		case 2:
		   {nodePtr2 R2=(nodePtr2)new(struct Node2);
		  
		   R2->staffPtr=&cAdministrator;
		   cout<<"in the information of the Administrator:"<<endl;
  	       cAdministrator.setName();
  	       cAdministrator.setNum();
  	       cAdministrator.setSex();
           cAdministrator.setServiceYears();
  	       cAdministrator.setPosition();
  	       cAdministrator.setBasicSalary();
  	       cAdministrator.setServiceYearsSalary();
  	       cAdministrator.setPositionSalary();
  	       R2->next=h2->next;
  	       h2->next=R2;
  	       //delete R2;
	       break; } 
		case 3:
		   {nodePtr3 R3=(nodePtr3)new(struct Node3);
		   
		   R3->staffPtr=&cTeacher;
           cTeacher.setName();
  	       cTeacher.setNum();
  	       cTeacher.setSex();
  	       cTeacher.setServiceYears();
  	       cTeacher.setBasicSalary();
  	       cTeacher.setServiceYearsSalary();
  	       cTeacher.setKind();
  	       cTeacher.setTime();
  	       cTeacher.setMosterNum();
  	       cTeacher.setDoctorNum();
           cTeacher.setMoneyTime();
  	       cTeacher.setMoneyMoster();
  	       cTeacher.setMoneyDoctor();
	       R3->next=h3->next;
  	       h3->next=R3; 
  	       //delete R3;
		   break;}                   
        default:
           cout<<"please in the right number:"<<endl;

       }
	}
	///输出信息
	nodePtr1 r1=(nodePtr1)new(struct Node1);
	nodePtr2 r2=(nodePtr2)new(struct Node2);
	nodePtr3 r3=(nodePtr3)new(struct Node3);
	r1=h1->next;r2=h2->next;r3=h3->next;
	cout<<"out the information of the TempStaff:" <<endl;
	if(!r1)
		cout<<"no people of the TempStaff"<<endl;
	while(r1)
	{
		cout<<cTempStaff;
		r1=r1->next;
	}
	cout<<"out the information of the Administrator:" <<endl;
	if(!r2)
		cout<<"no people of the Administrator"<<endl;
	while(r2)
	{
		cout<<cAdministrator;
		r2=r2->next;
	}
	cout<<"out the information of the Teacher:" <<endl;
	if(!r3)
		cout<<"no people of the Teacher"<<endl;
	while(r3)
	{
		cout<<cTeacher;
		r3=r3->next;
	}
	system("pause");
}
