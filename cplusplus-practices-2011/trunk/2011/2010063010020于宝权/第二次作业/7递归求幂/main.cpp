/*
 * File:   main.cpp
 * Author: DELL
 *
 * Created on 2011��9��24��, ����1:48
 */

#include <cstdlib>
#include<iostream>
using namespace std;

int func(int x, int y){
    int re;
    if(y==0){return 1;}
    if(y==1){return x;}
    else{
        re = x*func(x,y-1);
        return re;
    }
}
int main(int argc, char** argv) {
    int m,n;
    while(true){
        cout<<"������m,n: ";
        cin>>m>>n;
        cout<<"m��n����== "<<func(m,n)<<endl;
    }
    return 0;
}

