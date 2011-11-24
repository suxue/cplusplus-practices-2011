#include<iostream.h>
#include<string.h>
struct Phone
{
	char number[13];
	char name[7];
}PhoneBook[]={
	{"1362548692","Herry"},{"1234783452","Tom"},{"2345632","Marry"},{"2346853","Mike"},
	{"2347895","Alice"},{"13587539204","Breeze"},{"14578932076","Jack"},{"12353679860","Clara"}
};
bool SubStrNum(char *str,char *substr)
{
	int h1,h2;//to save the length of str,substr
	int p1,p2;//point to str,substr
	h1=strlen(str);
	h2=strlen(substr);
	if(h1<h2)
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
	char string[13];
	phones=sizeof(PhoneBook)/sizeof(Phone);
	cout<<"Input phone number or name:";
	cin>>string;
	for(int i=0;i<phones;i++)
	{
		if(SubStrNum(PhoneBook[i].number,string))
			cout<<i+1<<"\t"<<PhoneBook[i].number<<"\t"<<PhoneBook[i].name<<endl;
	}
	for(i=0;i<phones;i++)
	{
		if(SubStrNum(PhoneBook[i].name,string))
			cout<<i+1<<"\t"<<PhoneBook[i].number<<"\t"<<PhoneBook[i].name<<endl;
	}
	return 0;
}


