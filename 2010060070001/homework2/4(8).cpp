#include<iostream.h>
#include<string.h>
bool palindrome(char *str)
{
	int h=strlen(str);
	for(int i=0;i<h/2;i++)
		if(str[i]!=str[h-i-1])
			return false;
		return true;
}
int main()
{
	char text[180];
	cin>>text;
	if(palindrome(text))
		cout<<"a palindrome string"<<endl;
	else
		cout<<"not a palindrome string"<<endl;
	return 0;
}


    