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
	cout<<"������һ�������͵绰����:\n";
	for(i=0;i<MAX;i++)
	{
		cin>>person[i].name>>person[i].teleNum;
	}/*����һ���绰���뱡*/ 
	
	cout<<"�������������绰����������п�ͷһ����,ȫ��һ������ӣ�ֻ��ΪӢ������:\n";
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
