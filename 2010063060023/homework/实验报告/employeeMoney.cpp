#include<iostream>
#include<string>
#include"employeeMoney.h"
using namespace std;


/////CTempStaff�� 

      CTempStaff::CTempStaff(){fixedSalary=0;}
      void CTempStaff:: setFixedSalary()
      {
      	cout<<"fixedSalary:"<<endl;
        cin>>fixedSalary;
      }
	  double CTempStaff::GetSalary()
	  {
  		return fixedSalary;
  	  }
  	 
std::ostream& operator <<(std::ostream &cout,CTempStaff &a)
{
	cout<<"name:"<<a.getName()<<'\t'<<"number:"<<'\t'
    <<a.getNum()<<'\t'<<"sex:"<<a.getSex()<<'\t'<<
	"service years:"<<a.getServiceYears()<<'\t'<<"salary:"<<a.GetSalary()<<endl;
	return cout;
}
///CAdministrator�� 

	    CAdministrator::CAdministrator()
	    {
    		position=0;
    		basicSalary=0;
    		serviceYearsSalary=0;
    		positionSalary=0;
    	}
		void  CAdministrator::setPosition()
		{
			cout<<"position(0:һ����Ա1:�Ƽ�������Ա):"<<endl;
            cin>>position;
		}
        int  CAdministrator::getPosition()
        {
        	return position;
        }
        void  CAdministrator::setBasicSalary()
		{
			cout<<"basicSalary:"<<endl;
            cin>>basicSalary;
		}
        double  CAdministrator::getBasicSalary()
        {
        	return basicSalary;
        }
        void  CAdministrator::setServiceYearsSalary()
		{
		    cout<<"serviceYearsSalary:"<<endl;
            cin>>serviceYearsSalary;
		}
        double  CAdministrator::getServiceYearsSalary()
        {
        	return serviceYearsSalary;
        }
        void  CAdministrator::setPositionSalary()
		{
			cout<<"positionSalary:"<<endl;
            cin>>positionSalary;
		}
        double  CAdministrator::getPositionSalary()
        {
        	return positionSalary;
        }
double CAdministrator:: GetSalary()
{
	switch(position)
	{
	case 0:
	   return basicSalary+serviceYearsSalary;
	   break;
    case 1:
       return basicSalary+serviceYearsSalary+positionSalary;
       break;
    default:
       cout<<"in the wrong position:"<<endl;
       return 0;
       break;
	}
}
std::ostream& operator <<(std::ostream &cout,CAdministrator &a)
{
	cout<<"name:"<<a.getName()<<'\t'<<"number:"<<a.getNum()
	<<'\t'<<"sex:"<<a.getSex()<<'\t'<<"service years:"<<a.getServiceYears()
	<<'\t'<<"position:"<<a.getPosition()<<'\t'<<"basic salary:"<<
	a.getBasicSalary()<<'\t'<<"serviceYearsSalary:"<<a.getServiceYearsSalary()
	<<'\t'<<"positionSalary:"<<a.getPositionSalary()<<'\t'<<"salary:"<<
	a.GetSalary()<<'\t'<<endl;
	return cout;
}

/////CTeacher�� 

	    CTeacher::CTeacher()
	    {
    	  kind=0;Time=0; mosterNum=0; doctorNum=0;
    	  basicSalary=0;
    	  serviceYearsSalary=0;
    	  moneyTime=0;
    	  moneyMoster=0;
    	  moneyDoctor=0;
    	}
		void CTeacher::setKind()
		{
			cout<<"kind(0:��ʦ1�������ڼ����� 2������):"<<endl;
            cin>>kind;
		} 
        int CTeacher::getKind()
        {
            return kind;	
        }
        void CTeacher::setTime()
        {
        	cout<<"Time:"<<endl;
            cin>>Time;
        }
        int CTeacher::getTime()
        {
            return Time;	
        }
		void CTeacher::setMosterNum()
		{
			cout<<"mosterNum:"<<endl;
            cin>>mosterNum;
		}
        int CTeacher::getMosterNum()
        {
        	return mosterNum;
        }
		void CTeacher::setDoctorNum()
		{
			cout<<"doctorNum:"<<endl;
            cin>>doctorNum;
		}
        int CTeacher::getDoctorNum()
        {
        	return doctorNum;
        }
        void CTeacher::setBasicSalary()
		{
		    cout<<"basicSalary:"<<endl;
            cin>>basicSalary;
		}
        double CTeacher::getBasicSalary()
        {
        	return basicSalary;
        }
        void CTeacher::setServiceYearsSalary()
		{
			cout<<"serviceYearsSalary:"<<endl;
            cin>>serviceYearsSalary;
		}
        double CTeacher::getServiceYearsSalary()
        {
        	return serviceYearsSalary;
        }
        void CTeacher::setMoneyTime()
		{
			switch(kind)
			{
	           case 0:
	              cout<<"moneyTime of һ�㽲ʦ:"<<endl;
                  cin>>moneyTime;
                  break;
			   case 1:
	              cout<<"moneyTime of �����ںͽ���:"<<endl;
                  cin>>moneyTime;
                  break;
			   case 2:
	              cout<<"moneyTime of ����:"<<endl;
                  cin>>moneyTime;
                  break;
               default:
                   cout<<"in the wrong kind:"<<endl;
                   break;
			}
		}
        double CTeacher::getMoneyTime()
        {
        	return moneyTime;
        }
        void CTeacher::setMoneyMoster()
		{
           cout<<"moneyMoster:"<<endl;
           cin>>moneyMoster;    
		}
		double CTeacher::getMoneyMoster()
		{
			return moneyMoster;
		}
		void CTeacher::setMoneyDoctor()
		{
           cout<<"moneyDoctor:"<<endl;
           cin>>moneyDoctor;    
		}
		double CTeacher::getMoneyDoctor()
		{
			return moneyDoctor;
		}
double CTeacher:: GetSalary()
{
	switch(kind)
	{
	   case 0:
	      return basicSalary+serviceYearsSalary+Time*moneyTime;
	      break;
       case 1:
          return basicSalary+serviceYearsSalary+Time*moneyTime+moneyMoster*mosterNum;
          break;
       case 2:
	      return basicSalary+serviceYearsSalary+Time*moneyTime+
		  moneyMoster*mosterNum+moneyDoctor*doctorNum;
          break;
	   default:
          cout<<"in the wrong kind:"<<endl;
          return 0;
          break;         	
	}	
}
std::ostream& operator <<(std::ostream &cout,CTeacher&a)
{
    cout<<"name:"<<a.getName()<<'\t'<<"number:"<<a.getNum()<<'\t'<<"sex:"<<a.getSex()
	<<'\t'<<"service years:"<<a.getServiceYears()<<'\t'<<"kind:"<<a.getKind()<<'\t'<<"basic salary:"<<a.getBasicSalary()<<'\t'<<
	"serviceYearsSalary:"<<a.getServiceYearsSalary()<<'\t'<<"time:"<<a.getTime()<<
	'\t'<<"mosterNum:"<<a.getMosterNum()<<'\t'<<"dostorNum:"<<a.getDoctorNum()<<'\t'
	<<"monetTime:"<<a.getMoneyTime()<<'\t'<<"monetMoster:"<<a.getMoneyMoster()
	<<'\t'<<"moneyDoctor:"<<a.getMoneyDoctor()<<'\t'<<"salary:"<<a.GetSalary()<<endl;
	return cout;
}

///Cstaff���и���������
CStaff::CStaff()
{
	number="0";
    name="0";
   //salary=0;
    sex=0;
    serviceYears=0;
}
void CStaff::setNum()
{
	cout<<"number:"<<endl;
    cin>>number;
}
string CStaff::getNum()
{
	return number;
}
void CStaff::setName()
{
	cout<<"name:"<<endl;
    cin>>name;	
}
string CStaff::getName()
{
	return name;
}
void CStaff::setSex()
{
	cout<<"sex(0 is man and 1 is women):"<<endl;
    cin>>sex;
}
int CStaff::getSex()
{
	return sex;
}
void CStaff::setServiceYears()
{
	cout<<"serviceYears:"<<endl;
    cin>>serviceYears;
}
int CStaff::getServiceYears()
{
	return serviceYears;
}

//���� �����乤���ɹ������ ��ͬ�˵�λ��ͬ   ��װ  ��Աsalary��ʹ�� 
// salary �Ļ��    GetSalary()������  �Ա�����  ְλ�����ϵ��ж� 
//�洢���� 

