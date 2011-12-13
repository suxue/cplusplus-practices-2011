#include<iostream>
using namespace std;
int main()
{
const int N=10;
int i,j,n,m,a[10];
cout<<"请输入十个正整数：";
for(i=0;i<10;i++){ 
                cout<<"a["<<i<<"]"<<"="; 
                cin>>a[i]; 
       } 
for(n=0;n<N;n++)
for(m=0;m<n;m++)
{
if(a[m]>a[n])
{
int t;
t=a[m];
a[m]=a[n];
a[n]=t;
}
}
for(n=0;n<N;n++)
if(a[n]%2!=0){
cout<<a[n];
}
for(n=0;n<N;n++){
if(a[n]%2==0)
cout<<a[n];
}
return 0;
system("pause");
}