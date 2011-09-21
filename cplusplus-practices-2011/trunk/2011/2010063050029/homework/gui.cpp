
#include<iostream>
using namespace std;
int  main()
{  int weight,distance;

cin>>weight>>distance;
if(weight<=15)
cout <<"money is "<<5<<endl;
if(weight>15&&weight<=30)
cout <<"money is "<<9<<endl;
if(weight>30&&weight<=45)
cout <<"money is "<<12<<endl;
if(weight>45&&weight<=60)

cout<<"money is "<<14+(distance/1000)<<endl;

if(weight>=75)


cout<<"money is "<<15+(distance/1000)<<endl;


}
