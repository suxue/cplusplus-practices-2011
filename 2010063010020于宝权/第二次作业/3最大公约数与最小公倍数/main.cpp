/*
 * File:   main.cpp
 * Author: �ڱ�Ȩ
 *���������������������С������
 * Created on 2011��9��24��, ����11:29
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    while(true){int a ,b;
    cout<<"��������������"<<endl;
    cin>>a>>b;
    int max(int,int);
    int min(int,int);
    int zuida = max(a,b);
    int zuixiao = min(a,b);
    cout<<"���Լ���� "<<zuida<<endl;
    cout<<"��С�������� "<<zuixiao<<endl;
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
