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
	    cout<<"是回文\n";
	}
	else {
	     cout<<"不是回文\n";
	}
     }
    return 0;
}
