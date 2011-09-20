/*
  输入包裹重量一级邮寄距离，计算邮资 
**/
#include<iostream>
using namespace std;
int main(void){
    int value,weight,distance;
    std::cout<<"Please input the weight and the distance!\n";
    std::cin>>weight>>distance;
    if(weight<=15)std::cout<<5;
    else if(weight<=30)std::cout<<9;
    else if(weight<=45)std::cout<<12;
    else if(weight<=60)std::cout<<14+distance/1000;
    else std::cout<<(15+distance/1000);    
    return 0;   
} 
