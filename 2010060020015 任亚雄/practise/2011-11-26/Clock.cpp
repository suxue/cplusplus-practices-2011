#include<iostream>
#include<stdlib.h>
using namespace std;
class Clock//尝试下类的构造函数与析构函数 
{
 private:
         int H,M,S;
 public:   
        Clock(int H=0,int M=0,int S=0)
        {
          H=H,M=M,S=S; 
          cout<<"constructor:"<<H<<":"<<M<<":"<<S<<endl;                           
        }             
        ~Clock()
        {
          cout<<"destructor:"<<H<<":"<<M<<":"<<S<<endl;
        }      
};
int main()
{
  Clock C3(10,0,0);
  Clock C4(11,0,0);
  system("pause");
  return 0;                                                       
}

Clock C1(8,0,0);
Clock C2(9,0,0);    
