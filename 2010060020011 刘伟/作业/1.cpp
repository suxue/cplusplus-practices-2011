#include<iostream>
using namespace std;
class CStaff{
	public:
	void SetNo(int No){
		this->No=No;
	}
	int GetNo(){
		return No;
	}
	void SetName(string Name){
		this->Name=Name;
	}
	string GetName(){
        return Name;
	}
	void SetSex(string Sex){
		this->Sex=Sex;
	}
	string GetSex(){
		return Sex;
	}
	void SetServiceYears(int Years){
		this->Years=Years;
	}
	int GetServiceYears(){
		return Years;
	}
	int GetSalary();
	private:
	int No,Years;
	string Name,Sex;
};
class CTempStaff:public CStaff{
	public:
	int GetSalary(){
		return 2000;
	}
};
class CAdministrator:public CStaff{
	public:	
		int GetSalary(int pos,int ServiceYears){
			if(1==pos)
		        return 2000+ServiceYears*200;		
            if(2==pos)			
			    return 2000+ServiceYears*200+pos*500;
			if(3==pos)
			    return 2000+ServiceYears*200+pos*1000;
		}
};
class CTeacher:public CStaff{
	public:	
    int GetSalary(int pos,int ServiceYears,int keshishu,int shuoshirenshu=0,int boshirenshu=0){
			if(1==pos)
		        return 2000+ServiceYears*200+keshishu*20;		
            if(2==pos)			
			    return 2000+ServiceYears*200+keshishu*30+shuoshirenshu*50;
			if(3==pos)
			    return 2000+ServiceYears*200+keshishu*40+shuoshirenshu*50+boshirenshu*100;
		}
};
int main(){
	CTempStaff 	TempStaff; 
	CAdministrator Administrator;
	CTeacher  	Teacher;
	int a,No,ServiceYears,pos;
	string Name,Sex;
	cout<<"请选择人员：1-临时人员，2-行政人员，3-教师:";
	cin>>a;
	if(a==1){
		cout<<"请输入姓名，性别，工龄，职工号"<<endl;
		cin>>Name>>Sex>>ServiceYears>>No;		
		TempStaff.SetNo(No);
		TempStaff.SetName(Name);
		TempStaff.SetSex(Sex);
		TempStaff.SetServiceYears(ServiceYears);
		cout<<"姓名："<<TempStaff.GetName()<<endl;
		cout<<"职工号："<<TempStaff.GetNo()<<endl;
		cout<<"性别："<<TempStaff.GetSex()<<endl;
    	cout<<"工龄："<<TempStaff.GetServiceYears()<<endl;
    	cout<<"工资："<<TempStaff.GetSalary()<<endl;
	}
	if(a==2){
		cout<<"请输入姓名，性别，工龄，职工号"<<endl;
		cin>>Name>>Sex>>ServiceYears>>No;
		cout<<"请选择职位:1-一般人员,2-科级人员,3-科级以上行政人员:";
		cin>>pos;		
		Administrator.SetNo(No);
		Administrator.SetName(Name);
		Administrator.SetSex(Sex);
		Administrator.SetServiceYears(ServiceYears);
		cout<<"姓名："<<Administrator.GetName()<<endl;
		cout<<"职工号："<<Administrator.GetNo()<<endl;
		cout<<"性别："<<Administrator.GetSex()<<endl;
    	cout<<"工龄："<<Administrator.GetServiceYears()<<endl;
    	cout<<"工资："<<Administrator.GetSalary(pos,ServiceYears)<<endl;
	}
	if(a==3){
		int shuoshirenshu,boshirenshu,keshishu; 
		cout<<"请输入姓名，性别，工龄，职工号"<<endl;
		cin>>Name>>Sex>>ServiceYears>>No;
		cout<<"请选择职位:1-讲师,2-副教授及教授,3-博导:";
		cin>>pos;
		if(pos==1){
			cout<<"课时数";
			cin>>keshishu;
		}
		else if(pos==2){
			
			cout<<"请输入课时数,所带的硕士人数：";
			cin>>keshishu>>shuoshirenshu;
		}	
		else if(pos==3){
			cout<<"请输入课时数,所带的硕士人数和博士人数：";
			cin>>keshishu>>shuoshirenshu>>boshirenshu;
		}
			
		Teacher.SetNo(No);
		Teacher.SetName(Name);
		Teacher.SetSex(Sex);
		Teacher.SetServiceYears(ServiceYears);
		cout<<"姓名："<<Teacher.GetName()<<endl;
		cout<<"职工号："<<Teacher.GetNo()<<endl;
		cout<<"性别："<<Teacher.GetSex()<<endl;
    	cout<<"工龄："<<Teacher.GetServiceYears()<<endl;
    	cout<<"工资："<<Teacher.GetSalary(pos,ServiceYears,keshishu,shuoshirenshu,boshirenshu)<<endl;
	}
	return 0;
}


	