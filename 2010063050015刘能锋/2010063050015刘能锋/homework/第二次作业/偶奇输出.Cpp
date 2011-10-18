#include<iostream>
using namespace std;
int main()
{  int a[10],b[10],i,j,tag=0;
   for(i=0;i<10;i++)
      cin>>a[i];
   for(i=0;i<10;i++)
     for(j=i+1;j<10;j++)//先排序 
	    {int temp;
	     if(a[i]>a[j])
    		{ temp=a[i];
		      a[i]=a[j];
			  a[j]=temp;	 
		    }
    	}       	
    for(i=0,j=0;i<10;i++)//输出 
	{ if(a[i]&1) printf("%d\t",a[i]);//输出奇数，偶数存在另一个数组中 
		else{
			b[j]=a[i];
			j++;tag++;
		}
	}
	for(i=0;i<tag;i++) printf("%d\t",b[i]);	
	printf("\n");
}
