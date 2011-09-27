/*
 * File:   main.cpp
 * Author: 于宝权
 *排列组合
 * Created on 2011年9月24日, 下午12:47
 */

#include <cstdlib>
#include<iostream>
using namespace std;


int cmn(){
    int m,n;
    cout<<"请输入m和n的值:"<<endl;
    cin>>m>>n;
    int jieCheng(int);
    int M = jieCheng(m);
    int N = jieCheng(m-n);
    cout<<"M= "<<M<<"/ "<<"N= "<<N<<"/ "<<"Cmn= "<<M/N<<endl;
    return M/N;
}
int jieCheng(int k){
    int re = k;
    for(int i = 1;i<k;i++){
        re *=k-i;
    }
    return re;
}
int main(int argc, char** argv) {
    while(true){
        cmn();
    }
    return 0;
}
