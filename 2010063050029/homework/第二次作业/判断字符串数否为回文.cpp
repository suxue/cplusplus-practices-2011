#include<iostream>
#include<string>
using  namespace std;
int  huiwen(char a[],int len)
{
int flag=1;
 for(int i=0;i<=len/2;i++){
  if(a[i]!=a[len-i]){
   flag=0;
   break;}
  else continue;
 }
 return flag;
 }
 int main()
 {cout<<"请输入字符串"<<'\n';
char str[100];
cin.getline(str,100);
  int k=strlen(str)-1;
 if(huiwen(str,k))  cout<<"字符串是回文";
 else cout<<"字符串不是回文";
 }
