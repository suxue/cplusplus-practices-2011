#include<iostream>
using namespace std;
	   float sum=2;
	   int main(){
	   	   int n,i,j;
	   	   float result;
	   	   cout<<"������һ�����ȣ���������ֵԽ���ʾԽ��ȷ����"<<endl;
	   	   cin>>n;
	       for(i=5;i<=n;i=i+4)
           sum-=(1/i);
	       for(j=3;j<=n;j=j+4)
	       sum+=(1/j);	   
	       result=4*sum;
	       cout<<"�õ���Բ���ʵ�ֵΪ��"<<result<<endl;
	   	   system("pause");
		   }
