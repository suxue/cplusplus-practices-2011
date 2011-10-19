#include<iostream>
#define N 10
using namespace std;
int main(){
int a[N],i,j,k,b[2][N];

for(i=0;i<N;i++)
cin>>a[i];
for(i=0;i<N;i++){
    for(j=i+1;j<N;j++)
         if(a[i]>a[j]){
         k=a[i];a[i]=a[j];a[j]=k;
        }
}
for(i=0,k=0,j=0;i<N;i++){
  if(a[i]%2){
      b[0][k++]=a[i];
   }
   else b[1][j++]=a[i];
}
for(i=0;i<k;i++)
cout<<b[0][i];
for(i=0;i<j;i++)
cout<<b[1][i];
return 0;
}
