//¿½±´º¯Êý
#include<iostream>
#include<stdlib.h>
using namespace std;
class Clock
{
  private:
        int H,M,S;
  public:   
       Clock(int h=0,int m=0,int s=0)
       {
         H=h;
         M=m;
         S=s;
         cout<<"constructor:"<<H<<":"<<M<<":"<<S<<endl;                          
       }                   
       ~Clock()
       {
        cout<<"destructor:"<<H<<":"<<M<<":"<<S<<endl;                                                                          
       }
       Clock(Clock &p)
       {
          cout<<"copy constructor,before call:"<<H<<":"<<M<<":"<<S<<endl;
          H=p.H;
          M=p.M;
          S=p.S;                                                                                                                     
       }
       void ShowTime()
       {
        cout<<H<<":"<<M<<":"<<S<<":"<<endl;                                                                                                                              
       }
} ;
Clock fun(Clock C)
{
 return C;
}

int main()
{
 Clock c1(8,0,0);
 Clock c2(9,0,0);
 Clock c3(c1);
 fun(c2);
 Clock c4;
 c4=c2;
 system("pause");
 return 0;                                                                                                                                                                         
}
