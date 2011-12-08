#include<iostream>
using namespace std;
int main(){
const int N=10;
int a[N]={}, b[N]={},c[N]={},i,j,m=0,n=0,temp;
cout<<"please input 10 integers:"<<endl;
for(j=0;j<10;j++){
	cin>>i;
	if(i%2==0){
		a[m++]=i;
			}else{
			b[n++]=i;
			}
}
for(i=1;i<m;i++)
    {
        for(j=0;j<m-i;j++)
           if(a[j]>a[j+1])
           {
               temp=a[j+1];
               a[j+1]=a[j];
               a[j]=temp;
           }
   }
for(i=1;i<n;i++)
    {   
        for(j=0;j<n-i;j++)
           if(b[j]>b[j+1])
           {
               temp=b[j+1];
               b[j+1]=b[j];
               b[j]=temp;         
           }
   }
cout<<"The result is:"<<endl;
for(i=0;i<n;i++){
cout<<b[i]<<" ";
}
for(i=0;i<m;i++){
cout<<a[i]<<" ";
}

    }
    