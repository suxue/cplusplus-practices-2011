#include<iostream>
using namespace std;
int main(){
	int a[10],b[10],c[10],x,n=0,m=0;
	cout<<"请输入10个整数"<<endl;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	for(int i=0;i<10;i++){
    	if(a[i]%2==0){
    	b[n]=a[i];
    	n++;}
    	else
    	{c[m]=a[i];
    	m++;}
    }
    for(int i=0;i<n-1;i++)
      for(int j=i+1;j<n;j++){
    	if(b[i]>b[j]){
    		int temp;
	    	temp=b[i];
	    	b[i]=b[j];
	    	b[j]=temp;
	    }
    }
     for(int i=0;i<m-1;i++)
      for(int j=i+1;j<m;j++){
    	if(c[i]>c[j]){
    		int temp;
	    	temp=c[i];
	    	c[i]=c[j];
	    	c[j]=temp;
	    }
    }
    for(int i=0;i<m;i++){
		cout<<c[i]<<" ";
    }
    for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
    }
    return 0;

}