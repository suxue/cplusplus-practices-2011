#include<iostream>
using namespace std;
struct list{
char name[20];
char number[12];
};
main(){
struct list shb[5];
strcpy(shb[0].name,"王小明");
strcpy(shb[0].number,"13848951236");
strcpy(shb[1].name,"李华");
strcpy(shb[1].number,"13535698741");
strcpy(shb[2].name,"王帅");
strcpy(shb[2].number,"13848851476");
strcpy(shb[3].name,"李宏");
strcpy(shb[3].number,"13982214782");
strcpy(shb[4].name,"张三");
strcpy(shb[4].number,"15896521478");
char s[10]; 
cout<<"请输入要查找的电话号码或姓名（可不完全输入）！";
cin>>s;
int a,i;
char t1[20],t2[20];
a=strlen(s);
for(i=0;i<5;i++)
{
strcpy(t1,shb[i].number);
t1[a]='\0';
    if(strcmp(s,t1)==0)
cout<<shb[i].name<<"\t"<<shb[i].number<<"\n";
strcpy(t2,shb[i].name);
t2[a]='\0';
if(strcmp(s,t2)==0)
cout<<shb[i].name<<"\t"<<shb[i].number<<"\n";
}
}