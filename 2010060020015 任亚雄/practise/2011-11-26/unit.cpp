//类的联合
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
  void SetTime(int h,int m,int s)
  {
  H=h,M=m,S=s;                       
  }
  Clock(int h=0,int m=0,int s=0)
  {
  H=h,M=m,S=s;                          
  }
  int GetH()
  {
  return H;                                       
  }
  int GetM()
  {
  return M;                                                 
  }
  int GetS()
  {
  return S;
  }
};
class TrainTrip
{
  private:
  char *TrainNo;
  Clock StartTime;
  Clock EndTime;
  public:
  TrainTrip(char *TrainNo,Clock S,Clock E)
  {
  this->TrainNo=TrainNo;
  StartTime=S;
  EndTime=E;                              
  }           
  Clock TripTime()
  {
  int tH,tM,tS;
  int carry=0;
  Clock tTime;
  (tS=EndTime.GetS()-StartTime.GetS())>0?carry=0:tS+=60,carry=1;
  (tM=EndTime.GetM()-StartTime.GetM()-carry)>0?carry=0:tM+=60,carry=1;
  (tH=EndTime.GetH()-StartTime.GetH()-carry)>0?carry=0:tH+=24;
  tTime.SetTime(tH,tM,tS);
  return tTime;                                          
  }                                 
};
int main()
{
  Clock C1(8,10,10),C2(6,1,2);
  Clock C3;
  TrainTrip T1("k16",C1,C2);
  C3=T1.TripTime();
  C3.ShowTime();
  system("pause");
  return 0;                                            
}
