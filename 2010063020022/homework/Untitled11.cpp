#include<iostream>
using namespace std;
int main()
{
int kilo,a,pay;
cin>>kilo>>a;
if (kilo<=15)
  { cout<<"�ʷ�"<<5;}
   else if(15<kilo<=30)
   {cout<<"�ʷ�"<<9;}
   else if(30<kilo<=45)
   {cout<<"�ʷ�"<<12;}
   else if(45<kilo<=60)
   {cout<<"�ʷ�"<<14+a/1000;}
   else if(kilo<60)
   {cout<<"�ʷ�"<<15+a/1000;}
   return 0;}
