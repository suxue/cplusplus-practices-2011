/*
  分别正向，逆向输出26个英文字母 
**/
#include<iostream>
using namespace std;
int main(void){
    char ch='A';
    while(ch<='Z'){std::cout<<ch<<' ';ch++;}
    std::cout<<endl;
    while(ch>'A'){ch--;std::cout<<ch<<' ';}
    return 0;   
}
