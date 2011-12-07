#include<iostream>
using namespace std;

void GetPi()
{
  cout<<"请输入精度(至少为0.1)"<<endl;
  double N;  cin>>N;
  N/=10;
  double Pi_Q=0;
  for(double i=1;1/(i*2-1)>N;i++)
  {
    if((int)i%2) Pi_Q+=1/(i*2-1);
    else Pi_Q-=1/(i*2-1);
  }     
  
  N*=10;
  int n=(1/N)+0.5;
  int Pi=Pi_Q*4*n;
  Pi=Pi%n;
  n/=10;
  cout<<"3.";
  
  while(n)
  {
    cout<<Pi/n;
    Pi=Pi%n;
    n/=10;
  }
}

int main()
{
  while(3)
    GetPi();
}
