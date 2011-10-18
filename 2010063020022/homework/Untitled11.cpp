#include<iostream>
using namespace std;
int main()
{
int kilo,a,pay;
cin>>kilo>>a;
if (kilo<=15)
  { cout<<"邮费"<<5;}
   else if(15<kilo<=30)
   {cout<<"邮费"<<9;}
   else if(30<kilo<=45)
   {cout<<"邮费"<<12;}
   else if(45<kilo<=60)
   {cout<<"邮费"<<14+a/1000;}
   else if(kilo<60)
   {cout<<"邮费"<<15+a/1000;}
   return 0;}
