#include<iostream> 
using namespace std;
int prime(int n); 
int main() 
{
 int n; 
 cout<<"������һ������"<<endl; 
 cin>>n; 
 if (prime(n)) 
  cout<<"������"<<endl; 
 else 
  cout<<"��������"<<endl;
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

