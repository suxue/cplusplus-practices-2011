#include <iostream>

#include <string>
using namespace std;
int main()
{
	char a[30];
	cout<<"�����룺"<<endl;
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
		cout<<"���ǻ��ġ�"<<endl;
	}
	else
	{
		cout<<"�ⲻ�ǻ��ġ�"<<endl;
	}
	
	return 0;
}