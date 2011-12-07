#include<iostream>
using namespace std;
#include<cstring>
#define Large1 20 
#define Large2 10
struct NumNode
{
	char name[Large1];
	char Num[Large2];
};
int main()
{
	struct NumNode person[Large2];
    void insertData(struct NumNode *,const char *,int );
	char *h;
	int i;
	
	h=new char[Large1];
	cout<<"请输入一组姓名和电话号码:\n";
	for(i=0;i<Large1;i++)
	{
		cin>>person[i].name>>person[i].Num;
	}
	
	cout<<"请输入姓名、电话号码或者其中开头一部分,英文名用点号连接:\n";
	cin>>h;
	
   insertData(&person[0],h,Large1);
}
void insertData(struct NumNode *p,const char *L,int n)
{
	int i;
	if((*L>='a'&&*L<='z')||(*L>='A'&&*L<='Z'))
	{
		for(i=0;i<Large1;i++)
		{
		   if(strstr(p->name,L)!=NULL)
		   {
			  cout<<p->name<<' '<<p->Num<<'\n';
		   }
		  p++;
		}
	  }
    else if(*L>='0'&&*L<='9')
	 {
		 for(i=0;i<Large1;i++)
		 {
		   if(!strncmp(p->Num,L,strlen(L)))
		   {
			    cout<<p->name<<' '<<p->Num<<'\n';
		   }
		        p++;
		 }
	}
	else
	{
		i=0;
		while(i++<Large1)
		{
			if(!strncmp(p->name,L,strlen(L)))
			   cout<<p->name<<' '<<p->Num<<'\n';
			   p++;
		}
	}
	cout<<endl;
}
