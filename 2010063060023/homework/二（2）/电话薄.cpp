#include<iostream>
using namespace std;
typedef struct teDi
{
	string name;
	string num;
	struct teDi *next;
} teDi,*teDiPtr;

void creat (teDiPtr p);//存入 
//void out(teDiPtr p);//输出电话薄信息 
void check (string s,teDiPtr p);//查找 

int main()
{
	teDiPtr head=(teDiPtr)new(struct teDi);
	head->next=NULL;
    creat (head);
    creat (head);
    //creat(head);
    //creat (head);
    creat (head);
    out(head);
    string s;
    cout<<"put in the condition"<<endl;
    cin>>s;
    check (s,head);
}

void creat (teDiPtr p)
{
    cout<<"put in the name:"<<endl;
    teDiPtr q=(teDiPtr)new(struct teDi);
	cin>>q->name;
	cout<<"put in the number:"<<endl;
	cin>>q->num;
	q->next=p->next;
	p->next=q;	
}

/*void out(teDiPtr p)
{
	while(p->next)
	{
		cout<<"name:"<<p->next->name<<'\t'<<"number:"<<p->next->num<<endl;
		p=p->next;
	}
}*/

void check (string s,teDiPtr p)
{
	int symNo=0;  //判断找不到 
	while(p->next)
	{ 
	    int symName=0;
	    int symNum=0;
	    for(int i=0;s[i];i++)//也可以用while循环 
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
	    cout<<"can't find it,,";
     
     system("pause");
}
