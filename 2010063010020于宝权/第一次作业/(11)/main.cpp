/*
 * File:   main.cpp
 * Author: 于宝权
 *
 * Created on 2011年9月16日, 下午7:29
 * No.(11)邮寄包裹
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    double weith;
    double cost;
    int number;
    int distance;
    double totle;

    cout<<"input the weith:";
    cin>>weith;
    cout<<endl;

    cout<<"input the number:";
    cin>>number;
    cout<<endl;

    cout<<"input the distance:";
    cin>>distance;
    cout<<endl;

    if(weith<=15){
        cost = 5; }
    if((weith>15)&&(weith<=30)){
        cost = 9; }
    if((weith>30)&&(weith<=45)){
        cost = 12;}
    if((weith>45)&&(weith<=60)){
        cost = 14+distance/1000;}
    if((weith>60)&&(weith<75)){
        cost = 15+distance/1000;}
    if(weith>75){
        cost = 15+distance/1000;}

    totle = number * weith * cost;

    cout<<"totle is "<< totle <<" yuan!"<<endl;
    int n;
    cin>>n;
    return 0;
}

