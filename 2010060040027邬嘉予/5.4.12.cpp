#include"iostream"
#include"string.h"
using namespace std;
bool Su(char*str,char*substr)
{
    int h1,h2,p1,p2;
    h1=strlen(str);
    h2=strlen(substr);
    if(h2>h1)
    return false;
    p1=0;
    while(p1<h1)
    {
        p2=0;
        while(str[p1]==substr[p2]&&p2<h2&&p1<h1)
        {
            p1++;
            p2++;
        }

    if(p1==h1&&p2<h2)
    return false;
    if(p2==h2)
    return true;
    else
    p1=p1-p2+1;
    }
    return false;
}
struct Phone
{
    char number[25];
    char name[16];
}PhoneBook[]={"136666666666","杨杨"};
int main()
{
    int phones;
    char string[30];
    phones=sizeof(PhoneBook)/sizeof(Phone);
    cout<<"请输入电话或姓名:";
    cin>>string;
    for(int i=0;i<phones;i++)
    {
        if(Su(PhoneBook[i].number,string))
        cout<<i<<"\t"<<PhoneBook[i].number<<"\t"<<PhoneBook[i].name<<endl;
    }
    for(int i=0;i<phones;i++)
    {
        if(Su(PhoneBook[i].name,string))
        cout<<i<<"\t"<<PhoneBook[i].number<<"\t"<<PhoneBook[i].name<<endl;
    }
}







