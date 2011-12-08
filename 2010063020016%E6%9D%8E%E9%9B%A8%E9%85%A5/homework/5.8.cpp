#include<iostream> 
using namespace std; 
bool huiwen(char s[]) 
{ 
    int x=strlen(s); 
    int t=x-1; 
 for(int i=0;i<x/2;i++,t--) 
 { 
  if(s[t]!=s[i]) 
   return false; 
 } 
 return true; 
} 
int main() 
{ 
 char ss[50]; 
 cin>>ss; 
 int t; 
 t=huiwen(ss); 
 if(t==0) 
  cout<<"不是回文"<<endl; 
 else 
  cout<<"是回文"<<endl; 
} 
