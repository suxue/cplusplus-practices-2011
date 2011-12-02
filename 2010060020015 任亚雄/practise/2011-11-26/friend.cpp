//friend
#include<iostream>
#include<stdlib.h>
using namespace std;
class Clock
{
 private:
         int H,M,S;
 public:
      void ShowTime()
      {
        cout<<H<<":"<<M<<":"<<S<<endl;                                      
      }                      
      void SetTime(int h=0,int m=0,int s=0)
      {
        H=h,M=m,S=s;                       
      }
      Clock(int h=0,int m=0,int s=0)
      {
       H=h,M=m,S=s;                          
      }
      friend Clock TripTime(Clock & StartTime,Clock &EndTime);
};
Clock TripTime(Clock & StartTime,Clock &EndTime)
{
  int tH,tM,tS;
  int carry=0;
  Clock tTime;
  (tS=EndTime.S-StartTime.S)>0?carry=0:tS+=60,carry=1;
  (tM=EndTime.M-StartTime.M-carry)>0?carry=0:tM+=60,carry=1;
  (tH=EndTime.H-StartTime.H-carry)>0?carry=0:tH+=24;
  tTime.SetTime(tH,tM,tS);
  return tTime;          
}
int main()
{
 Clock C1(8,10,10),C2(6,1,2);
 Clock C3;
 C3=TripTime(C1,C2);
 C3.ShowTime();
 system("pause");
 return 0;                         
}
