#include<iostream.h>
#include<string.h>
using namespace std;
int main()
{
    char *word;
    cout<<"�������ַ���"<<endl;
	cin>>word;
	int l=strlen(word);
	int i=0;
	int j;
	for(i=0;i<=l-1;i++)
	{
	  if((word[i]!=word[l-1-i])&&(i!=l-1))
	  {
	    cout<<"���ַ������ǻ���"<<endl;
	    break;
	  }
	  else if((word[i]==word[l-1-i])&&(i!=l-1))
	  {}
	  else 
	  {
  	    cout<<"���ַ����ǻ���"<<endl;	
  	  }	
	}   
	return 0;
}