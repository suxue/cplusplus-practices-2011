#include<iostream>
using namespace std;
typedef struct item
{
	string name;
	string num;
	struct item *next;
} teDi,*itemPtr;

void creat (item p);
void check (string s,itemPtr p);

int main()
{
	itemPtr head=(itrmPtr)new(struct item);
	head->next=NULL;
    creat (head);
    string s;
    cout<<"put in the condition"<<endl;
    cin>>s;
    check (s,head);
}

void creat (itemPtr p)
{
    cout<<"put in the name:"<<endl;
    itemPtr q=(itemPtr)new(struct item);
	cin>>q->name;
	cout<<"put in the number:"<<endl;
	cin>>q->num;
	q->next=p->next;
	p->next=q;	
}
void check (string s,itemPtr p)
{
	int symNo=0; 
	while(p->next)
	{ 
	    int symName=0;
	    int symNum=0;
	    for(int i=0;s[i];i++)
	    {
		   if(s[i]!=p->next->name[i])
     		  symName=1;
	       if(s[i]!=p->next->num[i])
     		  symNum=1;
	    }
	      if(symName==0)
	         {cout<<"name:"<<p->next->name<<'\t'<<"number:"<<p->next->num<<endl;symNo++;}
          if(symNum==0)
             {cout<<"name:"<<p->next->name<<'\t'<<"number:"<<p->next->num<<endl;symNo++;} 
        p=p->next;
     }
	 if(symNo==0) 
	    cout<<"can't find it";
     system("pause");
}
