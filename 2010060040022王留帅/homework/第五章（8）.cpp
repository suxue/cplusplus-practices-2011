#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20];
    int n;
    cout <<"请输入字符串："<< endl;
    cin>>str;
    int t=0;
	n=strlen(str);
   for(int i=0;i<n;i++)
  	{
	   if(str[i]==str[n-1-i])
		 t++;
    }
    if(t==n)
    cout<<"该字符串回文"<<endl;
    else
    cout<<"该字符串不回文"<<endl;
    return 0;
}
