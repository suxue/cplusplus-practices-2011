#include <iostream>
using namespace std;

int main()
{
    string a;
    int i=0,j=0;
    int s=1;
	cout<<"请输入一个字符串：";
	cin>>a;
	while(a[j]!='\0')
	    j++;
	for(i=0;i<j;i++)
	{
        if(a[i]!=a[j-i-1])
            s=0;
    }
    if(s)
        cout<<"是回文"<<endl;
    else
        cout<<"不是回文"<<endl;                       
}