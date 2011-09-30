/*
 * youfei.cpp
 *
 *  Created on: 2011-9-24
 *      Author: zhanglei
 */

#include<iostream>
using namespace std;

int main(){
       char a='A';

       for(;a<'A'+26;a++)
     cout<<a<<"   ";
       cout<<'\n';
       a=a-1;
       for(;a>'A'-1;a--)
           cout<<a<<"   ";
       return 0;
}




