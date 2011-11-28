#include <iostream>

#include <string>
using namespace std;
int main()
{
	char word1[20],word2[20];
	cout<<"Please input the word."<<endl;
	int n,i;
	gets(word1);
	n=strlen(word1);
	for(i=0;i<n;i++)
	{
		word2[n-i-1]=word1[i];
	}
	if(strcmp(word1,word2)==0)
	{
		cout<<"It is a palindrome."<<endl;
	}
	else
	{
		cout<<"It is not a palindrome."<<endl;
	}
	
	return 0;
}