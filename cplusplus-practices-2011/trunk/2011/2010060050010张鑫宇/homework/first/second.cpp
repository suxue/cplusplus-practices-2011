#include<iostream>
using namespace std;
int main()
{
	int i,j;
	
	for(i=65;i<=90;i++)
		{
			cout<<(char)i<<"\t";
		}
	    cout<<endl;
		
	for(j=90;j>=65;j--)
		{
			cout<<(char)j<<"\t";
		}
		cout<<endl;
	return 0;
}