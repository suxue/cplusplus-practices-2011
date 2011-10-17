#include<iostream>
using namespace std;
int main(){
     int i,n,k;
     char str[100]; 
     cout<<"输入字符串:";
     cin>>str;
     n=strlen(str);
     for(i=0;i<n/2;i++)
     if(str[i]!=str[n-i-1])
          cout<<"不是回文";
          else
          cout<<"是回文";           
      cin>>k;
      return 0;
      }
