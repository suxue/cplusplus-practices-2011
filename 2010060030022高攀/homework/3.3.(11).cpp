#include<iostream>
#include"stdlib.h"
using namespace std;

int main()
{    
     int weight,distance,time,money;
     cout<<"Please input the weight of your package:";
	 cin>>weight;
	 time=(int)(weight-1)/15;
	 cout<<"Please input the distance:";
	 cin>>distance;
	 switch(time)
	 {
 		case 0:money=5;break;
 		case 1:money=9;break;
 		case 2:money=12;break;
 		case 3:
		 
	     
 		if(distance<1000)
 		money=14;
 		else money=14+(int)distance/1000;
 		break;
 		case 4:
 		if(distance<1000)
 		money=15;
 		else money=15+(int)distance/1000;
 		break;
 	}
 	cout<<"Money is:"<<money<<endl;
 	system("pause");
 	return 0;
}
