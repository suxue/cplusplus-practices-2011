#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
float a;int postfee,distant;
cin>>a>>distant;
if(a<=0){
cout<<"ÊäÈë´íÎó"£»
}
if(a>0&&a<=15){
postfee=5;
}
if(a>15&&a<=30){
postfee=9;
}
if(a>30&&a<=45){
postfee=12;
}
if(a>45&&a<=60){
postfee=14+distant/1000;
}
if(a>60){
postfee=15+distant/1000;
}
cout<<"ÓÊ×ÊÊÇ£º"<<postfee;
}







