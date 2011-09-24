/*
 * File:   main.cpp
 * Author: 于宝权
 *功能:根据输入,计算不同精度的圆周率
 * Created on 2011年9月24日, 上午10:07
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    void p();
    p();
    return 0;
}
void p(){
    double pi ;
    int n;
    while(true){
        cin>>n;
    while(n<=0){
        cout<<"error!"<<endl;
        cin>>n;
        }
        double a,b,c;
        pi = 0;
    for(int i = 0;i<n;i++){
        a = -1;
        if(i%2==0){
            a = 1;
        }
         b = 2.0*i+1;
         c = 4.0*a/b;
        pi += c;
        //cout<<"a= "<<a<<"/"<<"b= "<<b<<"/"<<"c= "<<c<<"/"<<"pi= "<<pi<<endl;
        }
    cout<<"PI = "<<pi<<endl;
    }
    system("pause");

}

