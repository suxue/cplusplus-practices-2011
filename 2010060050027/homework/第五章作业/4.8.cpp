#include<iostream>
using namespace std;

char* is_HuiWen(char* Str)
{
    int len=strlen(Str);
    for(int i=0;i<len/2;i++)
        if(Str[i]!=Str[len-1-i])
            return "���ǻ���";
    return "�ǻ���";
}

int main()
{
    char* str;
    while(scanf("%s",str)==1)
    {
        cout<<'"'<<str<<'"'<<is_HuiWen(str)<<endl;
    }
    return 0;
}
