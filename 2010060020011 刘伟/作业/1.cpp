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
	cout<<"��ѡ����Ա��1-��ʱ��Ա��2-������Ա��3-��ʦ:";
	cin>>a;
	if(a==1){
		cout<<"�������������Ա𣬹��䣬ְ����"<<endl;
		cin>>Name>>Sex>>ServiceYears>>No;		
		TempStaff.SetNo(No);
		TempStaff.SetName(Name);
		TempStaff.SetSex(Sex);
		TempStaff.SetServiceYears(ServiceYears);
		cout<<"������"<<TempStaff.GetName()<<endl;
		cout<<"ְ���ţ�"<<TempStaff.GetNo()<<endl;
		cout<<"�Ա�"<<TempStaff.GetSex()<<endl;
    	cout<<"���䣺"<<TempStaff.GetServiceYears()<<endl;
    	cout<<"���ʣ�"<<TempStaff.GetSalary()<<endl;
	}
	if(a==2){
		cout<<"�������������Ա𣬹��䣬ְ����"<<endl;
		cin>>Name>>Sex>>ServiceYears>>No;
		cout<<"��ѡ��ְλ:1-һ����Ա,2-�Ƽ���Ա,3-�Ƽ�����������Ա:";
		cin>>pos;		
		Administrator.SetNo(No);
		Administrator.SetName(Name);
		Administrator.SetSex(Sex);
		Administrator.SetServiceYears(ServiceYears);
		cout<<"������"<<Administrator.GetName()<<endl;
		cout<<"ְ���ţ�"<<Administrator.GetNo()<<endl;
		cout<<"�Ա�"<<Administrator.GetSex()<<endl;
    	cout<<"���䣺"<<Administrator.GetServiceYears()<<endl;
    	cout<<"���ʣ�"<<Administrator.GetSalary(pos,ServiceYears)<<endl;
	}
	if(a==3){
		int shuoshirenshu,boshirenshu,keshishu; 
		cout<<"�������������Ա𣬹��䣬ְ����"<<endl;
		cin>>Name>>Sex>>ServiceYears>>No;
		cout<<"��ѡ��ְλ:1-��ʦ,2-�����ڼ�����,3-����:";
		cin>>pos;
		if(pos==1){
			cout<<"��ʱ��";
			cin>>keshishu;
		}
		else if(pos==2){
			
			cout<<"�������ʱ��,������˶ʿ������";
			cin>>keshishu>>shuoshirenshu;
		}	
		else if(pos==3){
			cout<<"�������ʱ��,������˶ʿ�����Ͳ�ʿ������";
			cin>>keshishu>>shuoshirenshu>>boshirenshu;
		}
			
		Teacher.SetNo(No);
		Teacher.SetName(Name);
		Teacher.SetSex(Sex);
		Teacher.SetServiceYears(ServiceYears);
		cout<<"������"<<Teacher.GetName()<<endl;
		cout<<"ְ���ţ�"<<Teacher.GetNo()<<endl;
		cout<<"�Ա�"<<Teacher.GetSex()<<endl;
    	cout<<"���䣺"<<Teacher.GetServiceYears()<<endl;
    	cout<<"���ʣ�"<<Teacher.GetSalary(pos,ServiceYears,keshishu,shuoshirenshu,boshirenshu)<<endl;
	}
	return 0;
}


	