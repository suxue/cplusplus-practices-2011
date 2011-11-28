#include<iostream>
using namespace std;
int main()
{
	/*输入 */
  int a[10],b[10],c,d,n=10,i=0,j=0;  // a数组为奇数，b数组为偶数
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
	  
	  /*冒泡 */
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
	
	/*输出*/ 
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