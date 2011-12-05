#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str1[25],str2[25];
	cout<<"请输入一个字符串"<<endl;
	int n,i;
	gets(str1);
	n=strlen(str1);
	for(i=0;i<n;i++)
	{
		str2[n-i-1]=str1[i];
	}
	if(strcmp(str1,str2)==0)
	{
		cout<<"该字符串是回文"<<endl;
	}
	else
	{
		cout<<"该字符串不是是回文"<<endl;
	}
	
	return 0;
}