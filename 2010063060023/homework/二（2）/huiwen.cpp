#include<iostream>
#include<string.h>
using namespace std;
void isHuiwen(char* ch);//�ж��Ƿ��ǻ��� 
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
      cout<<"is ����"<<endl;
    else
      cout<<"isn't ����"<<endl;
}
