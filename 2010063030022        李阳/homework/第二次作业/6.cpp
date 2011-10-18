#include<iostream>
using namespace std;
struct man
{
    char name[20];
    int number[15];
};

    int main()
    {
        int i,j;
        char Name[10];int Number[3];
        char name[20];int number[15];
        man s[100];
        for(int i=0;i<100;i++)
    {
      cin>>s[i].name;cin[i].number;
    }
        switch(j/1)
        {
            case 1:
            cin>>name[20];
            for(i=0;i<100;i++)
            {
               for(j=0;j<20;j++)
               {
                  if(s[i].name[j]!=name[j])
                  break;
               }
            }
                cout<<s[i].name<<s[i].number<<endl;

            break;/*输入名字，输出名字和号码*/
            case 2:
            cin>>number[15];
            for(i=0;i<100;i++)
            {
                for(j=0;j<15;j++)
                {
                    if(s[i].number[j]!=number[j])
                    break;
                }
            }
                cout<<s[i].name<<s[i].number<<endl;

            break;/*输入号码，输出名字和号码*/
            case 3:
            cin>>Name[10];
            for(i=0;i<100;i++)
            {
                for(j=0;j<10;j++)
                {
                    if(s[i].name[j]!=Name[j])
                    break;
                }
            }
                cout<<s[i].name<<s[i].number<<endl;
            break;/*输入部分名字，输出名字和号码*/
            case 4:
            cin>>Number[3];
            for(i=0;i<100;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(s[i].number[j]!=Number[j])
                    break;
                }
            }
            cout<<s[i].name<<s[i].number<<endl;
            break;/*输入部分号码，输出名字和号码*/
            }
            return 0;
    }

