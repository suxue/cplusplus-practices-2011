#include<iostream.h>
using namespace std;
int main()
{
	char a='A',z='Z';
	int i,j,k;
	i=(int)a;
	j=(int)z;
	for(k=i;k<=j;k++)
	{
		cout<<(char)k<<" ";
	}
	cout<<endl;
	for(k=j;k>=i;k--)
	{
		cout<<(char)k<<" ";
	}
	return 0;
}