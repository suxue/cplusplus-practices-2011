#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
	cout<<"please input the package's weight(integer):";
	int weight;
	cin>>weight;
	cout<<"please input the distance to post(integer):";
	int distance;
	cin>>distance;
	int postage;
	int temp=(int)(weight-1)/15;
	switch(temp){
	case 0:postage=5;break;
	case 1:postage=9;break;
	case 2:postage=12;break;
	case 3:
		if(distance<1000)postage=14;
		else postage=14+(int)distance/1000;
		break;
	default:
		if(distance<1000)postage=15;
		else postage=15+(int)distance/1000;
		break;
	}
	cout<<"The postage is "<<postage<<" yuan.";
	return 0;
}
