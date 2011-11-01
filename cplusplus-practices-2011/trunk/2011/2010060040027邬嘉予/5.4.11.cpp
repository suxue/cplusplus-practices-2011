#include <iostream>
#include <string.h>
using namespace std;
struct Phone
{
    char number[20];
    char name[16];
}PhoneBook[]{
    {"02881945678","王国栋"},
    {"139083245678","张良"},
    {"02899432093","李慕容"},
    {"12342213896","付玉东"}

};
bool SubStrNum(char *str,char *substr){
    int h1,h2;
    int p1,p2;
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
int main()
{
    int phones;
    char string[20];
    phones=sizeof(PhoneBook)/sizeof(Phone);
    cout<<"Input phone number or name：";
    cin>>string;
    for(int i=0;i<phones;i++){
        if(SubStrNum(PhoneBook[i].number, string))
        cout<<i<<"\t"<<PhoneBook[i].number<<"\t"<<PhoneBook[i].name<<endl;

    }
    for(int i=0;i<phones;i++){
        if(SubStrNum(PhoneBook[i].name, string))
           cout<<i<<"\t"<<PhoneBook[i].number<<"\t"<<PhoneBook[i].name<<endl;
    }
}














