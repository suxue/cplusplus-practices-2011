/*
 * File:   main.cpp
 * Author: �ڱ�Ȩ
 *�������
 * Created on 2011��9��24��, ����12:47
 */

#include <cstdlib>
#include<iostream>
using namespace std;


int cmn(){
    int m,n;
    cout<<"������m��n��ֵ:"<<endl;
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
