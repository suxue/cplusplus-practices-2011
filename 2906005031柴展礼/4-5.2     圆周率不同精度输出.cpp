#include<iostream>
using namespace std;
	   float sum=2;
	   int main(){
	   	   int n,i,j;
	   	   float result;
	   	   cout<<"请输入一个精度（整数，数值越大表示越精确）："<<endl;
	   	   cin>>n;
	       for(i=5;i<=n;i=i+4)
           sum-=(1/i);
	       for(j=3;j<=n;j=j+4)
	       sum+=(1/j);	   
	       result=4*sum;
	       cout<<"得到的圆周率的值为："<<result<<endl;
	   	   system("pause");
		   }
