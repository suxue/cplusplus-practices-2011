#include<iostream>
using namespace std;
int main()
{
	int weight,distance;
	cout<<"Input the weight and distance:"<<endl;
	cin>>weight>>distance;
	if(weight<=15)
      cout<<"The pay is:"<<5<<endl;
	else if(weight>15&&weight<=30)
	  cout<<"The pay is:"<<9<<endl;
	else if(weight>30&&weight<=45) 
	  cout<<"The pay is:"<<12<<endl;
    else if(weight>45&&weight<=60)
      cout<<"The pay is:"<<14+distance/1000<<endl;
    else if(weight>60)
      cout<<"The pay is:"<<15+distance/1000<<endl;
	return 0;
}