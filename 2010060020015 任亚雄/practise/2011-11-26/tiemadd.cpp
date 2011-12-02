//time add
#include<iostream>
#include<stdlib.h>
using namespace std;
class Clock
{
  private:
      int H,M,S;
  public:
      void SetTime(int h,int m,int s)
      {
        H=h,M=m,S=s;                       
      }             
      void ShowTime()
      {
       cout<<H<<":"<<M<<":"<<S<<endl;
      }         
      Clock(int h=0,int m=0,int s=0)
      {
       H=h,M=m,S=s;                   
      }
      Clock(Clock &p)
      {
       H=p.H;
       M=p.M;
       S=p.S;                               
      }
      
      void TimeAdd(Clock *Cp);
      void TimeAdd(int h,int m,int s);
      void TimeAdd(int s);
};
void Clock::TimeAdd(Clock *Cp)
{
 H=(Cp->H+H+(Cp->M+M+(Cp->S+S)/60)/60)%24;
 M=(Cp->M+M+(Cp->S+S)/60)%60;
 S=(Cp->S+S)%60;                          
}

void Clock::TimeAdd(int h,int m,int s)
{
  H=(H+h+(m+M+(S+s)/60)/60)%24;
  M=(M+m+(s+S)/60)%60;
  S=(s+S)%60;                        
}

void Clock::TimeAdd(int s)
{
 H=(H+(M+(S+s)/60)/60)%24;
 M=(M+(S+s)/60)%60;
 S=(s+S)%60;                        
}

int main()
{                                    
   Clock  c1;
   Clock c2(2,20,20);
   c1.ShowTime();
   c1.TimeAdd(40000);
   c1.ShowTime();
   c2.TimeAdd(&c1);
   c2.ShowTime();
   system("pause");
   return 0;

}
