#include<iostream> 
using namespace std;
int prime(int n); 
int main() 
{
 int n; 
 cout<<"请输入一个整数"<<endl; 
 cin>>n; 
 if (prime(n)) 
  cout<<"是素数"<<endl; 
 else 
  cout<<"不是素数"<<endl;
  return 0;
} 
int prime(int n) 
{
 for (int i=2;i*i<n;i++) 
  
  if (n%i==0) 
  {
   return false;
   break; 
  }
   return true;  
} 

