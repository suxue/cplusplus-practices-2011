#include<iostream>
#include<cmath>
using namespace std;

class Ctriangle
{
  private:
          int a,b,c;
  public:
         Ctriangle(int _a,int _b,int _c)
         {
           a=_a; b=_b; c=_c;
         }
         double GetS()
         {
           int p=(a+b+c)/2;
           double s;
           return s=sqrt(p*(p-a)*(p-b)*(p-c));
         }
         int GetL()
         {
           return a+b+c;
         }
};

int main()
{
    Ctriangle C(3,4,5);
    cout<<"以构建三角形（3,4,5）\n";
    cout<<"面积:"<<C.GetS()<<endl;
    cout<<"周长:"<<C.GetL()<<endl;
    while(2);
    return 0;
}
