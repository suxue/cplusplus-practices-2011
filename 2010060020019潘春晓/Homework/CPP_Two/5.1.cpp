#include<iostream>
using namespace std;
int main()
{
	/*���� */
  int a[10],b[10],c,d,n=10,i=0,j=0;  // a����Ϊ������b����Ϊż��
  cout<< "Please input ten  numbers!"<<endl;
  while(n--)
  {
  	cin>>c;
  	if(c%2==1)
  	{
 	  a[i]=0;	
	  a[i]=c;
  	  i++;
  	}
  	else
  	{
	  	b[j]=0;
		b[j]=c;
	  	j++;
	  }
  }
	  
	  /*ð�� */
	 for(d=0;d<i;d++)
	 {
 		if(a[d]>a[d+1])
 		{
		 	c=a[d];
		 	a[d]=a[d+1];
		 	a[d+1]=c;
		 }
	}
	
	
	 for(d=0;d<j;d++)
	 {
 		if(b[d]>b[d+1])
 		{
		 	c=b[d];
		 	b[d]=b[d+1];
		 	b[d+1]=c;
		 }
	}
	
	/*���*/ 
    for(d=0;d<i;d++)
    {
    	cout<<a[d]<<endl;
    }
    for(d=0;d<j;d++)
    {
    	cout<<b[d]<<endl;
    }
	
	
  return 0;
}  