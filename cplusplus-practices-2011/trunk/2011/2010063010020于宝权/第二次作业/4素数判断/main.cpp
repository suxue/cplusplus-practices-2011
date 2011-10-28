/*
 * File:   main.cpp
 * Author: 于宝权
 *输入一个数,判断是否为素数
 * Created on 2011年9月24日, 下午12:26
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    int n,result;
    while(true){
    cout<<"请输入一个整数: ";
    cin>>n;
    int panDuan(int);
    result = panDuan(n);
    if(result==1){cout<<n<<"是合数hs"<<endl;}
    if(result==0){cout<<n<<"是素数ss"<<endl;}
    }
    return 0;
}
int panDuan(int k){
    int temp;
    for(int i = 2;i<k;i++){
        temp = k%i;
        if(temp==0&&k!=2){return 1;}
    }
    return 0;
}

