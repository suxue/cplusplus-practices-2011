#include<iostream.h>
#include<string.h>
using namespace std;
int main()
{
    char *word;
    cout<<"请输入字符串"<<endl;
	cin>>word;
	int l=strlen(word);
	int i=0;
	int j;
	for(i=0;i<=l-1;i++)
	{
	  if((word[i]!=word[l-1-i])&&(i!=l-1))
	  {
	    cout<<"该字符串不是回文"<<endl;
	    break;
	  }
	  else if((word[i]==word[l-1-i])&&(i!=l-1))
	  {}
	  else 
	  {
  	    cout<<"该字符串是回文"<<endl;	
  	  }	
	}   
	return 0;
}