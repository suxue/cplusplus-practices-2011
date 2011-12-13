#include <iostream>
using namespace std;
struct phone
{
	char number[20];
	char name[20];
}phonebook[]={
	{"12345678","zhangmazi"},
	{"13245673","wangmazi"},
	{"23152455","xielaibao"},
	{"83714423743","xiaofhaeo"},
	{"38285295292384","wodeshen"},
	{"1627382929","gaoxiaozhong"},
};
bool substrnum(char *str,char *substr)
{
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
		if(p2=h2)
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
	phones=sizeof(phonebook)/sizeof(phone);
	cout<<"input phone number or name:";
	cin>>string;
	for(int i=0;i<phones;i++)
	{
		if(substrnum(phonebook[i].number,string))
		cout<<i<<"\t"<<phonebook[i].number<<"\t"<<phonebook[i].name<<endl;
	}
	for(int i=0;i<phones;i++)
	{
		if(substrnum(phonebook[i].name,string))
		cout<<i<<"\t"<<phonebook[i].name<<"\t"<<phonebook[i].name<<endl;
	}
	return 0;
}
