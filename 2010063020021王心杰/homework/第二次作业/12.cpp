#include<iostream>
using namespace std;
struct dh{
	char name[20];
	char dialnumber[12];
};
main(){
struct dh shb[5];    //建立一个电话簿 
strcpy(shb[0].name,"张三");
strcpy(shb[0].dialnumber,"13548951236");
strcpy(shb[1].name,"李四");
strcpy(shb[1].dialnumber,"13535698741");
strcpy(shb[2].name,"王五");
strcpy(shb[2].dialnumber,"13648851476");
strcpy(shb[3].name,"王二");
strcpy(shb[3].dialnumber,"13982214782");
strcpy(shb[4].name,"张大力");
strcpy(shb[4].dialnumber,"15896521478");
char s[10]; 
cout<<"请输入要查找的电话号码或姓名（可以不完全输入）:";
cin>>s;
int a,i;
char t1[20],t2[20];
a=strlen(s);
for(i=0;i<5;i++)  //对所有的电话簿元素进行遍历 
{
	strcpy(t1,shb[i].dialnumber);  //将输入的字符和电话号码进行比较 
	t1[a]='\0';
    if(strcmp(s,t1)==0)
	cout<<shb[i].name<<"\t"<<shb[i].dialnumber<<"\n";
	strcpy(t2,shb[i].name);     //将输入的字符和名字进行比较
	t2[a]='\0';
	if(strcmp(s,t2)==0)
	cout<<shb[i].name<<"\t"<<shb[i].dialnumber<<"\n";
}
}
