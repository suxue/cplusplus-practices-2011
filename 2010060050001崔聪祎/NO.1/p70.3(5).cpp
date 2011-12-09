#include<iostream>
using  namespace  std;
int main()
{
	char A='A';char Z='Z';
	int i;
	for(i=0;i<26;i++)
	cout<<char(A+i)<<""<<endl;
	for(i=0;i<26;i++)
	cout<<char(Z-i)<<""<<endl;
}