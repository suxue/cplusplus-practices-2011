#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    string a;
    int i=0,j=0;
    bool isBackText=true;
	cout<<"������һ���ַ�����";
	cin>>a;
	while(a[j]!='\0')
	    j++;
	for(i=0;i<j;i++)
	{
        if(a[i]!=a[j-i-1])
            isBackText=false;
    }
    if(isBackText)
        cout<<"�ö������ǻ���"<<endl;
    else
        cout<<"�ö����ֲ��ǻ���"<<endl; 
    system("Pause");                       
}

