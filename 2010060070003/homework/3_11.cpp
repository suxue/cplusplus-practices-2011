#include<iostream>
using namespace std;
int main(){
    int w,fee;
    float d;
    cout<<"Please input the weight of the package:";
    cin>>w;
    if(w>0&&w<=15){
                   fee=5;
    }
    else if(w>15&&w<=30){
         fee=9;
    }
    else if(w>30&&w<=45){
         fee=12;
    }
    else if(w>45){
         cout<<"Please input the distance:";
         cin>>d; 
         int x=(int)(d/1000);
         if(w>45&&w<=60){
                        
                         fee=14+x;
         }
    else{
        fee=15+x;
    }
   }
    else{
    cout<<"Error";
    } 
    cout<<fee;
    system("pause");
    return 0;
}
