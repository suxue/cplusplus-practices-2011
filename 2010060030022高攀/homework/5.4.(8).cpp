#include<iostream>
#include<stdlib>
using namespace std;

int main(){
   char a[100],*p;
   cout<<"������һ���ַ�����"<<endl;
   cin>>a;
   p=a;
   int b=strlen(p),i; 
   for(i=0;i<b/2;){
   	if(p[i]==p[b-i-1])
   	i++;
   	else
   	{cout<<"������ַ������ǻ���"<<endl;
	   break;} 
   } 
   if(i==b/2)
   cout<<"������ַ����ǻ���"<<endl; 
   
   system("pause");
   return 0;
} 
