#include<iostream>
using namespace std;
main(){
	int a[10],n,o=0,b[10];
	cout<<"请输入十个整数:"<<"\n";
	for(n=0;n<10;n++)  //将输入的十个数存入数组a 
	{
		cin>>a[n];
	}
for(n=0;n<9;n++)         //首先对数组a进行冒泡排序 
   for(o=n+1;o<10;o++)
   if(a[n]>a[o]){
   	int t;
   	t=a[n];
   	a[n]=a[o];
   	a[o]=t;
   }
   o=0;                 //将计数的变量o置零 
for(n=0;n<10;n++){      //取出奇数依次存入数组b 
   if(a[n]%2==1){
   b[o]=a[n];
   o++;         }
}
for(n=0;n<10;n++)       //取出偶数接着奇数依次存入数组b 
{
	if((a[n]%2)==0){ 
	b[o]=a[n];
	o++;} 
}
cout<<"排序后的结果为:"<<"\n";
for(n=0;n<10;n++)    //输出结果 
	{
		cout<<b[n]<<"\t";
	}
}
