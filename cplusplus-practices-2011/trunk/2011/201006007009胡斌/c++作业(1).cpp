// c++作业(1).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
#include"iomanip"
using namespace std;
void SWAP(int x,int y){
	x=x+y;
    y=x-y;
    x=x-y;}
int main(){
	int a[10],b[10],c[10];
	int j=0,k=0,flag=1;
	cout<<"请输入数列："<<endl;
	for(int i=0;i<10;i++){
		cin>>a[i];
		if(a[i]%2!=0) b[j++]=a[i];
		else c[k++]=a[i];
	}
   for(int i = 0; i < j-1 && flag == 1; i++) {
   flag = 0;
   for(int I = 0;  I< j-i-1; I++) {
   if(b[I+1] < b[I]) {
    SWAP(b[I+1], b[I]);
     flag = 1;
   }
   }
   }
   for(int i=0;i<j;i++) cout<<setw(4)<<b[i];
 for(int i = 0; i < k-1 && flag == 1; i++) {
   flag = 0;
   for(int I = 0;  I< k-i-1; I++) {
   if(c[I+1] < c[I]) {
    SWAP(c[I+1], c[I]);
     flag = 1;
   }
   }
   }
   for(int i=0;i<k;i++) cout<<setw(4)<<c[i];} 

	
