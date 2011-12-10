#include"iostream"
using namespace std;
bool huiwen(char *str)
{
    int a=strlen(str);
    for (int i=0;i<a/2;i++)
    if(str[i]!=str[a-i-1])
    {return false;}
    return true;
}
int main()
{
    char t[20];
    cin>>t;
    if(huiwen(t))
    cout<<"是回文"<<endl;
    else
    cout<<"不是回文"<<endl;
}
