#include<iostream>
using namespace std;
int main(){
    int n,a,b,f;
    
    cout<<"�����������:";
    cin>>n;
    switch(n/15+1){
                 case 1:
                      cout<<"������5Ԫ/��" <<endl;
                      break;
                 case 2:
                      cout<<"������9Ԫ/��"<<endl;
                      break;
                 case 3:
                      cout<<"������12Ԫ/��"<<endl;
                      break;
                 case 4:
                      cout<<"�����ʼľ���:";
                      cin>>a;
                      switch(a/1000){
                                     case 0:
                                          cout<<"������14Ԫ/��";
                                          break;
                                     case 1:
                                          cout<<"������15Ԫ/��";
                                          break;
                                     case 2:
                                          cout<<"������16Ԫ/��";
                                          break;
                                     case 3:
                                          cout<<"������17Ԫ/��";
                                          break;
                                     default:
                                          cout<<"������18Ԫ/��";    
                                          }         
                      break;
                 default:
                      cout<<"�����ʼľ���:";
                      cin>>b;
                      switch(b/1000){
                                     case 0:
                                          cout<<"������15Ԫ/��";
                                          break;
                                     case 1:
                                          cout<<"������16Ԫ/��";
                                          break;
                                     case 2:
                                          cout<<"������17Ԫ/��";
                                          break;
                                     case 3:
                                          cout<<"������18Ԫ/��";
                                          break;
                                     default:
                                          cout<<"������19Ԫ/��";    
                                          }       }
                      cin>>f;
                      } 
