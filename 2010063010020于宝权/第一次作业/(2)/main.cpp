/*
 * File:   main.cpp
 * Author: 于宝权
 *
 * Created on 2011年9月16日, 下午7:04
 * No.(2)求100~200之间不能被3整除也不能被7整除的数
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

    int k,j;
    for(int i = 1;i<201;i++){
         k = i%3;
         j = i%7;
         if(j*k!=0){
        cout<<i<<',';}


    }
    int n;
    cin>>n;
    return 0;
}

