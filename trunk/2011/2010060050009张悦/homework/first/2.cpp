#include<iostream>
using namespace std;
int main()
{
	for(int i=65;i<=90;i++)
		{
			cout<<(char)i<<"\t";
		}
	cout<<endl;
	for(int i=90;i>=65;i--)
		{
			cout<<(char)i<<"\t";
		}
	return 0;
}
