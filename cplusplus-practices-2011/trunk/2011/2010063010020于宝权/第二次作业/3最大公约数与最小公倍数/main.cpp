/*
 * File:   main.cpp
 * Author: 于宝权
 *求两个数的最大公因子与最小公倍数
 * Created on 2011年9月24日, 上午11:29
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    while(true){int a ,b;
    cout<<"请输入两个整数"<<endl;
    cin>>a>>b;
    int max(int,int);
    int min(int,int);
    int zuida = max(a,b);
    int zuixiao = min(a,b);
    cout<<"最大公约数是 "<<zuida<<endl;
    cout<<"最小公倍数是 "<<zuixiao<<endl;
    }
    return 0;
}
int max(int a ,int b){
    int m,n,temp;
    m = a;
    n = b;
    if(a<=b){
    m = b;
    n = a;
    }
    while(true){
    temp = m%n;
    if(temp==0){return n;}
    m = n%temp;
    if(m==0){return temp;}
    n = temp%m;
    if(n==0){return m;}
    }

}
int min(int a ,int b){
    int i = max(a,b);
    return i*(a/i)*(b/i);
}
