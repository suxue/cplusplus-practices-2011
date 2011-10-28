/*
  求100~200之间不能被3和7整除的数 
**/
#include<iostream>
using namespace std;
int main(void){
    int num;
    for(num=100;num<=200;num++){
         if((num%3!=0)&&(num%7!=0))
         std::cout<<num<<' ';
    }
    return 0;   
}
