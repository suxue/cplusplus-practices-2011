#include<iostream>
using namespace std;
int main()
{

   int num[10];
   cout<<"����10�����֣�";
   int i,j,temp;
   for(i=0;i<10;i++)
   {
   	cin>>num[i];
   }
   for(i=0;i<9;i++)
	 for(j=i+1;j<10;j++)
     {
	     if(((num[i]%2)&&(num[j]%2)&&num[i]>num[j])||(!num[i]%2&&num[j]%2)||(!(num[i]%2)&&!(num[j]%2)&&num[i]>num[j]))
		 //��������ǰ���ں����ǰż���棬���� 
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
