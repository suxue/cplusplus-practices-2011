#include<iostream>
using namespace std;
#include<cstring>
#define SIZE 15
#define MAX 10
struct teleNumNode
{
	char name[SIZE];
	char teleNum[SIZE];
};

int main()
{
	struct teleNumNode person[MAX];
    void insertData(struct teleNumNode *,const char *,int );
	char *h;
	int i;
	
	h=new char[SIZE];
	cout<<"请输入一组姓名和电话号码:\n";
	for(i=0;i<MAX;i++)
	{
		cin>>person[i].name>>person[i].teleNum;
	}/*设立一个电话号码薄*/ 
	
	cout<<"请输入姓名、电话号码或者其中开头一部分,全名一点号连接（只能为英文名）:\n";
	cin>>h;
	
   insertData(&person[0],h,MAX);
}
void insertData(struct teleNumNode *p,const char *L,int n)
{
	int i;

	if((*L>='a'&&*L<='z')||(*L>='A'&&*L<='Z'))
	{
		for(i=0;i<MAX;i++)
		{
		   if(strstr(p->name,L)!=NULL)
		   {
			  cout<<p->name<<' '<<p->teleNum<<'\n';
		   }
		  p++;
		}
	    
	  }
    else if(*L>='0'&&*L<='9')
	 {
		 for(i=0;i<MAX;i++)
		 {
		   if(!strncmp(p->teleNum,L,strlen(L)))
		   {
			    cout<<p->name<<' '<<p->teleNum<<'\n';
		   }
		        p++;
		 }
	 
	}

	cout<<endl;
}/*end of main*/
