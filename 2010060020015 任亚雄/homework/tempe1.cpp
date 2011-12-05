#include<iostream>
#include<stdlib.h>
using namespace std;
class Myclass
{
  public:
         Myclass(int a,int b,int c);
         void GetNumber();
         void GetSum();
  private: 
         int A,B,C;
         static int sum;                                         
};

int Myclass::sum=0;


Myclass::Myclass(int a,int b,int c)
{
 A=a;
 B=b;
 C=c;
 sum+=A+B+C;                           
}

void Myclass::GetNumber()
                {
                 cout<<"Number="<<A<<","<<B<<","<<C<<endl;                         
                 }
void Myclass::GetSum()
                 {
                   cout<<"Sum="<<sum<<endl;
                 }
int main()
{
  Myclass M(1,2,3),N(4,5,6);
  M.GetNumber();
  N.GetNumber();
  M.GetSum();
  N.GetSum();
  system("pause");
  return 0;                                           
}                 
