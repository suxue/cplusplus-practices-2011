#include<iostream>
using namespace std;

bool HuiWen(string s)
{
    int len=strlen(Str);
    for(int i=0;i<len/2;i++)
    {    if(s[i]!=s[len-1-i])
            return false;
     }
    return true;
}

int main()
{
    string str;
    while(cin>>str)
    {
    	if(HuiWen(str)){
	    cout<<"�ǻ���\n";
	}
	else {
	     cout<<"���ǻ���\n";
	}
     }
    return 0;
}
