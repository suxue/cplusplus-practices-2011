/*
 * File:   main.cpp
 * Author: 于宝权
 *
 * Created on 2011年9月16日, 下午7:19
 * No(5)编写程序,分别正向,逆向输出26个大写英文字母
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

    for(int i = 0;i<26;i++){
        char j = i+65;
        cout<<j;
        if(i==25){
        cout<<endl;}
    }
    for(int p = 0;p<26;p++){
        char q = 90-p;
        cout<<q;
    }
    int n;
    cin>>n;


    return 0;
}

