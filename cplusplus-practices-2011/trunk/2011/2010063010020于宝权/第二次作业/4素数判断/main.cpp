/*
 * File:   main.cpp
 * Author: �ڱ�Ȩ
 *����һ����,�ж��Ƿ�Ϊ����
 * Created on 2011��9��24��, ����12:26
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
    cout<<"������һ������: ";
    cin>>n;
    int panDuan(int);
    result = panDuan(n);
    if(result==1){cout<<n<<"�Ǻ���hs"<<endl;}
    if(result==0){cout<<n<<"������ss"<<endl;}
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

