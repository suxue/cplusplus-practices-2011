#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    string m;
    int i=0,j=0;
    bool isBackText=true;
	cout<<"请输入一个字符串：";
	cin>>m;
	while(m[j]!='\0')
	    j++;
	for(i=0;i<j;i++)
	{
        if(m[i]!=m[j-i-1])
            isBackText=false;
    }
    if(isBackText)
        cout<<"该段文字是回文"<<endl;
    else
        cout<<"该段文字不是回文"<<endl; 
    system("Pause");                       
}

