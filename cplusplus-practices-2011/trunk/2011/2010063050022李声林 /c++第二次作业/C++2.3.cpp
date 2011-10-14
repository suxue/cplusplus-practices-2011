#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct student
{
    char name[21];
    char number[15];
};
int main()
{
    int n;
    cout<<"ÊäÈëÈËÊı:"<<endl;
    cin>>n;
    struct student stu[n+1];
    int i,flag;
    char a[21];
    for(i=1;i<=n;i++)
    {
        cin>>stu[i].name;
        cin>>stu[i].number;
    }
    flag=0;
    cin>>a;
    for(i=1;i<=n;i++)
    {
       if(strcmp(a,stu[i].number)==0)
        {
            cout<<stu[i].name<<":"<<stu[i].number<<endl;
            break;
        }
        else if(strcmp(a,stu[i].name)==0)
        {
            cout<<stu[i].name<<":"<<stu[i].number<<endl;
            break;
        }
        else if(stu[i].number[0]==a[0]&&a[0]=='0'&&stu[i].number[1]==a[1]&&a[1]=='1'&&stu[i].number[2]==a[2]&&a[2]=='0')
        cout<<stu[i].number<<endl;
        else if(stu[i].name[0]==a[0]&&a[0]=='y'&&stu[i].name[1]==a[1]&&a[1]=='a'&&stu[i].name[2]==a[2]&&a[2]=='n'&&stu[i].name[3]==a[3]&&a[3]=='g')
        cout<<stu[i].number<<endl;
        else
        cout<<"error!"<<endl;
    }
    return 0;
}
