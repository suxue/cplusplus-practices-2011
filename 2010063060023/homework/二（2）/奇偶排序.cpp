#include<iostream>
using namespace std;
int main()
{
   int num[10];
   cout<<"输入10个数字：";
   int i,j,temp;
   for(i=0;i<10;i++)
   {
   	cin>>num[i];
   }
   for(i=0;i<9;i++)
    for(j=i+1;j<10;j++)
     {
	     if( ((num[i]%2==0&&num[j]%2==1)||((num[i]%2==1)&&(num[j]%2==1)&&(num[i]>num[j])))
		    ||((num[i]%2==0)&&(num[j]%2==0)&&num[i]>num[j]) )
		 //当两奇且前大于后或者前偶后奇或者两偶且前大于后，，换 
	     {
     		temp=num[i];
	        num[i]=num[j];
	        num[j]=temp;
     	 }
     }
   
   for(i=0;i<10;i++)
   {
   	cout<<num[i]<<'\t';
   }
   system("pause");
   return 1;
}
//无语 
