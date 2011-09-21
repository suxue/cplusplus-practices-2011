#include<iostream>
using namespace std;
int main(){
    int n,a,b,f;
    
    cout<<"输入包裹质量:";
    cin>>n;
    switch(n/15+1){
                 case 1:
                      cout<<"邮资是5元/件" <<endl;
                      break;
                 case 2:
                      cout<<"邮资是9元/件"<<endl;
                      break;
                 case 3:
                      cout<<"邮资是12元/件"<<endl;
                      break;
                 case 4:
                      cout<<"输入邮寄距离:";
                      cin>>a;
                      switch(a/1000){
                                     case 0:
                                          cout<<"邮资是14元/件";
                                          break;
                                     case 1:
                                          cout<<"邮资是15元/件";
                                          break;
                                     case 2:
                                          cout<<"邮资是16元/件";
                                          break;
                                     case 3:
                                          cout<<"邮资是17元/件";
                                          break;
                                     default:
                                          cout<<"邮资是18元/件";    
                                          }         
                      break;
                 default:
                      cout<<"输入邮寄距离:";
                      cin>>b;
                      switch(b/1000){
                                     case 0:
                                          cout<<"邮资是15元/件";
                                          break;
                                     case 1:
                                          cout<<"邮资是16元/件";
                                          break;
                                     case 2:
                                          cout<<"邮资是17元/件";
                                          break;
                                     case 3:
                                          cout<<"邮资是18元/件";
                                          break;
                                     default:
                                          cout<<"邮资是19元/件";    
                                          }       }
                      cin>>f;
                      } 
