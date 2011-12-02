/*...............................*/
//说明演示const的在函数中的作用
//const 修饰形参 
#include<iostream>
#include<Cassert>
using namespace std;
char *StringCopy(char *strDestination ,const char *strSource)
{
  assert((strDestination!=NULL)&&(strSource!=NULL));
  char *address=strDestination;
  while((*strDestination++=*strSource++)!='\0')
  NULL;
  return address;                      
} 
//const修饰返回值
const char * GetString(void)
{
  char *szOut="日期输入结束！";
  return szOut;
                              
} 

//类DTime
class DTime
{
 public :
                              DTime(int iYear,int iMonth,int iDay)
                              {
                                m_nYear=iYear;
                                m_nMonth=iMonth;
                                m_nDay=iDay;                               
                              }             
       int GetYear() const{return m_nYear;}
       int GetMonth() const {return m_nMonth;}
       int GetDay() const {return m_nDay;}
       public:
                                  int m_nYear;
                                  int m_nMonth;
                                  int m_nDay;                 
} ;

int main()
{
  char szOutStr[256];
  char* szInStr="输入年月";
  StringCopy(szOutStr,szInStr);
  cout<<szOutStr<<endl;
  
  int nYear;
  int nMonth;
  int nDay;
  cin>>nYear;
  cin>>nMonth;
  cin>>nDay;
  
  DTime dt(nYear,nMonth,nDay);
  
  
  cout<<dt.GetYear()<<"-"<<dt.GetMonth()<<"-"<<dt.GetDay()<<endl;
  
  const char* str=GetString();
  cout<<str<<endl;
  system("pause");
  return 0;                                  
}
