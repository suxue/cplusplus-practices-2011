#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"������һ�����";
	cin>>n;
	if(n%400==0||(n%4==0&&n%100!=0))
	  cout<<n<<"Ϊ����";
	else 
	  cout<<n<<"��������";  
	return 0;
}