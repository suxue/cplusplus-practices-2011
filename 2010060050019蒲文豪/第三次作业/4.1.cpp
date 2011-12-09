#include<iostream>
using namespace std;
main(){
	int a[10],i,j,temp;
	for(i=0;i<10;i++)
 		cin>>a[i];
	
	for(i=0;i<10;i++)
	  for(j=1;j<10;j++)
	    if(a[j-1]>a[j])
	     {
   		  temp=a[i];
	      a[i]=a[j];
	      a[j]=temp;
         } 
         
    for(i=0;i<10;i++)
      if(a[i]%2) cout<<a[i]<<" ";
    for(i=0;i<10;i++)
      if(!(a[i]%2))  cout<<a[i]<<" ";
 } 