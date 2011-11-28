#include <iostream>

#include <string>
using namespace std;
int main()
{
	char a[30];
	cout<<"请输入："<<endl;
	int n,i,j,s;
	gets(a);
	n=strlen(a);
	for(i=0;i<n/2;i++)
	{
	      if(a[i]==a[n-1-i])
	      {
      		s++;
      	}
	}
	if(s==n/2)
	{
		cout<<"这是回文。"<<endl;
	}
	else
	{
		cout<<"这不是回文。"<<endl;
	}
	
	return 0;
}