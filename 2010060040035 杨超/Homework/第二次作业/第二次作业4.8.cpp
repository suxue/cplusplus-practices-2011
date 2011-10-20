#include<iostream>
using namespace std;

int main(){
   char a[100],*p;
   cin>>a;
   p=a;
   int b=strlen(p),i; 
   for(i=0;i<b/2;){
   	if(p[i]==p[b-i-1])
   	i++;
   	else
   	{cout<<"不是回文"<<endl;
	   break;} 
   } 
   if(i==b/2)
   cout<<"是回文"<<endl; 
   return 0;
} 