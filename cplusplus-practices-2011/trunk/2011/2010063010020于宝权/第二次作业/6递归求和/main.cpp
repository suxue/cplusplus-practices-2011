/*
 * File:   main.cpp
 * Author: 于宝权
 *
 * Created on 2011年9月24日, 下午1:16
 */

#include <cstdlib>
#include<iostream>
using namespace std;
int func(int k){
    int t;
    if(k==1){ t = 1;}
    else{t = k+func(k-2);}
    return t;
}
int main(int argc, char** argv) {

        int i = func(99);
        cout<<i<<endl;

    return 0;
}

