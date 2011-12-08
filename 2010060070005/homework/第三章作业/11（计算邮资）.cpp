#include <iostream>
using namespace std;
int main()
{
  int weight;
  int distance;
  int a;
  int postage;
  a=distance/1000;
  cout<<"Enter the weight:";
  cin>>weight;
  if(weight>=45)
  {
    switch(weight/15)
   {
     case 0:
         cout<<"The postage is 5";
         break;
     case 1:
         cout<<"The postage is 9";
         break;
     case 2:
         cout<<"The postage is 12";
         break;
    }
   }
  else
   {
     
     if((weight/15==3)&&(distance/1000==a))
     {
       postage=14+a;
       cout<<"The postage is:"<<postage;
      }
     else distance/1000==a;
      postage=15+a;
    }
   return 0;
   system("pause");
}
    
