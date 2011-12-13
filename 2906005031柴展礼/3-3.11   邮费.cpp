#include<iostream>
using namespace std;
int main(){
	int weight,distance,price;
	cout<<"Please input weight(g):";
	cin>>weight;
	cout<<"Please input distance(km):";
	cin>>distance;
	 if(weight>=15){
	 {
	 if(weight<30)
	 price=5;
	 else if(weight<45)
	 price=9;
	 else if(weight<60)
	 price=12;
	 else if(weight<75)
     price=14+(distance/1000);
	 else
	 price=15+(distance/1000);
	 }
	 cout<<price<<endl;
	 }
	 else cout<<"Input error!\n";
	 system("pause");
} 

