#include<iostream>

using namespace std;

#define MaxN 10
int main(){
    int A[MaxN];
    int i,j,k,d;
    cout<<"please input ten number:";
    for(i=0,j=0,k=0;i<MaxN;i++){
       cin>>d;
       if(d%2!=0)
    	   A[j++]=d;
       else A[MaxN-(++k)]=d;
    }
    for(d=1;d<j;d++){
    for(i=0;i<j-d;i++){
    	int temp;
    	if(A[i]>A[i+1]){
    		temp=A[i];
    		A[i]=A[i+1];
    		A[i+1]=temp;
    	}
    }
    }
    for(d=1;d<k;d++){
    	for(i=MaxN-k;i<MaxN-d;i++){
    	    	int temp;
    	    	if(A[i]>A[i+1]){
    	    		temp=A[i];
    	    		A[i]=A[i+1];
    	    		A[i+1]=temp;
    	    	}
    	    }
    }
    for(i=0;i<MaxN;i++){
    	cout<<" "<<A[i];
    }
   system("pause");
}
