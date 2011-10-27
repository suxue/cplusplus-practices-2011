#include <iostream>
#include <cstdlib> 
using namespace std;
int compare(int x,int y[]){
	int i,j;
	for(i=0;i<x-1;i++)
		for(j=i+1;j<x;j++)
			if(y[i]>y[j]){
				int temp;
				temp=y[i];
				y[i]=y[j];
				y[j]=temp;
			}
	return 0;
}
int main(){
	int a[10],b[10],c[10],*p,*q,i,j=0,k=0;
	for(i=0;i<10;i++){
		cin>>a[i];
		if(a[i]%2==1){
			b[j]=a[i];
			j++;
		}
		else{
			c[k]=a[i];
			k++;
		}
		p=b;
		q=c;
	}
	compare(j,p);
	compare(k,q);
	for(i=0;i<j;i++)
		cout<<p[i]<<'\t';
	for(i=0;i<k;i++)
		cout<<q[i]<<'\t';
	return 0;
}
