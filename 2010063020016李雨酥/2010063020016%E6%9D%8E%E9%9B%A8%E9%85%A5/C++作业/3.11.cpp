#include<iostream>
using namespace std;
int main()
{ int charge;
  double weight;
  cout<<"Please input the weight of the package:"<<endl;
  cin>>weight;
  if(weight<=0)
     cout<<"The input weight is no mean!"<<endl;
  else if(weight<=15)
     charge=5;
  else if(weight<=30)
     charge=9;
  else if(weight<=45)
     charge=12;
  else 
   {  double distance;
     cout<<"Please input the distance:"<<endl;
     cin>>distance;
     if(distance<=0)
      cout<<"The input distance is no mean!"<<endl;
     else
     {distance/=1000;
       if(weight<=60)
         charge=14+(int)distance;
       else
         charge=15+(int)distance*2;
      }
    }
  cout<<charge<<endl;
  return 0;
}