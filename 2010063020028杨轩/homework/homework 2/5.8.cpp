#include<iostream>
using namespace std;
int main()
{
	char a[50];
	cout<<"输入字符串：";
	cin>>a;
	int i,j;
	i=strlen(a)-1;
	if(i%2==0)
	{
	for(j=0;j<i/2;j++)
	{
	if(a[j]==a[i-j])
		{
		cout<<"这是回文"<<endl; 
	    }
	else
	    {
		cout<<"这不是回文"<<endl; 
	    }
    }
	}
	else
	{
		for(j=0;j<i/2;j++)
	{
	if(a[j]==a[i-1-j])
		{
		cout<<"这是回文"<<endl; 
	    }
	else
	    {
		cout<<"这不是回文"<<endl; 
	    }
    }
	}
}