#include<iostream>
using namespace std;
int main()
{
	int a;
	for(a=0;a<26;a++)
	{
	  cout<<char('A'+a)<<endl;
	} 
	for(a=0;a<26;a++)
	{
		cout<<char('Z'-a)<<endl;
	}
	return 0;
} 