#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    string m;
    int i=0,j=0;
    bool isBackText=true;
	cout<<"������һ���ַ�����";
	cin>>m;
	while(m[j]!='\0')
	    j++;
	for(i=0;i<j;i++)
	{
        if(m[i]!=m[j-i-1])
            isBackText=false;
    }
    if(isBackText)
        cout<<"��������ǻ���"<<endl;
    else
        cout<<"������ֲ��ǻ���"<<endl; 
    system("Pause");                       
}

