#include<iostream>
#include<stdlib>
using namespace std;

int main(){
   char a[100],*p;
   cout<<"请输入一串字符串："<<endl;
   cin>>a;
   p=a;
   int b=strlen(p),i; 
   for(i=0;i<b/2;){
   	if(p[i]==p[b-i-1])
   	i++;
   	else
   	{cout<<"输入的字符串不是回文"<<endl;
	   break;} 
   } 
   if(i==b/2)
   cout<<"输入的字符串是回文"<<endl; 
   
   system("pause");
   return 0;
} 
