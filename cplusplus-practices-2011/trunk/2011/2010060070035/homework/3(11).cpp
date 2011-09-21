#include<iostream>
using namespace std;
int main(){
	int weight,distance,pay;
	cout<<"weight:";
	cin>>weight;
	cout<<"distance:";
	cin>>distance;

	if(weight<=15) pay=5;
	else if(weight>15&&weight<=30) pay=9;
	else if(weight>30&&weight<=45) pay=12;
	else if(weight>45&&weight<=60) pay=14+(distance/1000);
	else	 pay=15+(distance/1000);
	
	cout<<"pay is "<<pay<<endl;
	
	return 0;


}