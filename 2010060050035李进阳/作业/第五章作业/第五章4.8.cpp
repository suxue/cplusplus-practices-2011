#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str1[25],str2[25];
	cout<<"������һ���ַ���"<<endl;
	int n,i;
	gets(str1);
	n=strlen(str1);
	for(i=0;i<n;i++)
	{
		str2[n-i-1]=str1[i];
	}
	if(strcmp(str1,str2)==0)
	{
		cout<<"���ַ����ǻ���"<<endl;
	}
	else
	{
		cout<<"���ַ��������ǻ���"<<endl;
	}
	
	return 0;
}