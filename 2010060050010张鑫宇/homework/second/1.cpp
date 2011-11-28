#include<iostream>

using namespace std;
int main()
{
	
  int  b[10],a[10],temp,d,n=10,s,i=0,j=0;  
  cout<<"输入十个整数："<<endl;
 for(s=0;s<n;s++)
  {
  	cin>>temp;
  	if(temp%2!=1)
  	{
 	    a[j]=0;
		a[j]=temp;
	  	j=j+1;
  	}
  	else
  	{ b[i]=0;	
	   b[i]=temp;
  	 i=i+1;
	  	
	  }
  }
	  
	  
	 for(d=0;d<i;d++)
	 {
 		if( b[d]> b[d+1])
 		{
		 	temp= b[d];
		 	 b[d]= b[d+1];
		 	 b[d+1]=temp;
		 }
	}
	
	
	 for(d=0;d<j;d++)
	 {
 		if(a[d]>a[d+1])
 		{
		 	temp=a[d];
		 	a[d]=a[d+1];
		 	a[d+1]=temp;
		 }
	}
	
	cout<<"结果是："<<endl;
    for(d=0;d<i;d++)
    {
    	cout<< b[d]<<endl;
    }
    for(d=0;d<j;d++)
    {
    	cout<<a[d]<<endl;
    }
	
	
  return 0;
}  