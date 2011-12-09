#include<iostream>
#include"stdlib.h"
using namespace std;

int main()
{
	int a;
	for(a=0;a<26;a++)
	{
	  cout<<char('A'+a);
	} 
	cout<<endl;
	for(a=0;a<26;a++)
	{
		cout<<char('Z'-a);
	}
	system("pause");
	return 0;
} 
