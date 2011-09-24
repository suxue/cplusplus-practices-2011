#include<iostream>
using namespace std;
int main()
{    
     int weight,distance,postage,times;
     cout<<"Please input the weight of your package:";
	 cin>>weight;
	 times=(int)(weight-1)/15;
	 cout<<"Please input the distance:";
	 cin>>distance;
	 switch(times)
	 {
 		case 0:postage=5;break;
 		case 1:postage=9;break;
 		case 2:postage=12;break;
 		case 3:
		 
	     
 		if(distance<1000)
 		postage=14;
 		else postage=14+(int)distance/1000;
 		break;
 		case 4:
 		if(distance<1000)
 		postage=15;
 		else postage=15+(int)distance/1000;
 		break;
 	}
 	cout<<"Postage is:"<<postage<<endl;
 	return 0;
}