#include<iostream>
using namespace std;
int main()
{
    int a=14,b=15,c=1;
    int d;
    float m,l;
    cout<<"请输入包裹重量以及邮寄距离:" ;
    cin>>m>>l;
    if(m<=15)
      d=5;
      else if(m<=30)
      d=9;
      else if(m<=45)
      d=12;
      else if(m<=60)
      d=a+l/1000;
      else d=b+l/1000;
      cout<<"邮资是："<<d;
      return 0; 
}
      
