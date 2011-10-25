#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Please input the word:";
    cin>>s;
    if(s.empty()){ 
                  cout<<"Empty";
                  }
    else{
         int i,j=s.length();
         for(i=0;i<=j/2;i++){
                             if(s.at(i)!= s.at(j-i-1))
                             break;
                             else continue;
                             }
    if(i>=(j/2)){
                 cout<<"Yes,it is.";
                 }
    else{
         cout<<"No,it isn't.";
         }
         }
    system("pause");
    return 0;
}
