#include<iostream>
using namespace std;
main(){
double weight,length;
int money;
cin>>weight>>length;
if(weight<=15)
money=5;
else if(weight<=30)
money=9;
else if(weight<=45)
money=12;
else if(weight<=60)
money=14+length/1000;
cout<<money;

}
