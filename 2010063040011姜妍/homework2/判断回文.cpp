#include<iostream>
using namespace std;
int main(){
     int i,n,k;
     char str[100]; 
     cout<<"�����ַ���:";
     cin>>str;
     n=strlen(str);
     for(i=0;i<n/2;i++)
     if(str[i]!=str[n-i-1])
          cout<<"���ǻ���";
          else
          cout<<"�ǻ���";           
      cin>>k;
      return 0;
      }
