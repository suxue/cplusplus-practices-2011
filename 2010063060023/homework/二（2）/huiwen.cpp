#include<iostream>
#include<string.h>
using namespace std;
void isHuiwen(char* ch);//判断是否是回文 
int main()
{
	cout<<"put in a string:"<<endl;
	string s;
	cin>>s;
	char *ch=&s[0];
	//cout<<strlen(ch);
	isHuiwen(ch);
	system("pause");
}

void isHuiwen(char* ch)
{
	int sysK=0;
   	for(int i=0;i<strlen(ch)/2;i++)
   	{
	   	if(ch[i]!=ch[strlen(ch)-1-i])
	     {sysK=1;break;}
    }  
    if(!sysK)
      cout<<"is 回文"<<endl;
    else
      cout<<"isn't 回文"<<endl;
}
