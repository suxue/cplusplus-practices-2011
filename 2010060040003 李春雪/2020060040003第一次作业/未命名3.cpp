#include<iostream>
#include<iomanip>
using namespace std ;
int  main(){
	float wei,dis;
	 
    cout<<"Pleas input the weight and distance"<<endl;
    cin>>wei>>dis;
    if(wei<0)
    {
    	cout<<"error";
    }else if(0<wei<=15){
    	cout<<"The payment is 5";   	
    }else if(15<wei<=30){
    	cout<<"The pament is 9";
    }else if(30<wei<=45){
    	cout<<"The payment is 12";
    }else if (45<wei<=60){
    	cout<<"The payment is"<<14+(int)(dis/1000);
    }else if(wei>60){
    	cout<<"The payment is"<<15+(int)(dis/1000);
    }end 
}