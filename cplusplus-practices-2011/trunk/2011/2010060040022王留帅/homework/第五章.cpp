#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20];
    int n;
    cout <<"�������ַ�����"<< endl;
    cin>>str;
    int t=0;
	n=strlen(str);
   for(int i=0;i<n;i++)
  	{
	   if(str[i]==str[n-1-i])
		 t++;
    }
    if(t==n)
    cout<<"���ַ�������"<<endl;
    else
    cout<<"���ַ���������"<<endl;
    return 0;
}
