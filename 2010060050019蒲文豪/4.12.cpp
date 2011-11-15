#include<iostream>
using namespace std;

typedef struct {
	char name[100],num[100];
}Card;
Card card[1000];
	int n=0;
void card_add(int n)
{
	cout<<"请输入姓名：  ";
	cin>>card[n].name;
	cout<<"请输入号码：  ";
	cin>>card[n].num; 
}

void card_print(Card c)
{
	cout<<"姓名："<<c.name<<"\t"<<"号码：" <<c.num<<endl;
}

void find_name()
{
	char* a;
	cout<<"请输入要查找的姓名：  ";
	cin>> a;
	int find=0;
	
	int len=strlen(a);
	for(int i=0;i<n;i++)
    {
    	 int ok=1;
	  for(int j=0;j<len;j++)
	  
  		 if(a[j]!=card[i].name[j])
	    {
    		ok=0;
	        break;
		 } 
		 if(ok)
		 {find=1;card_print(card[i]);}
  	   
    } 
	if(!find) cout<<"无此信息，查找失败"<<endl;	 
}

void find_num()
{
	char* a;
	cout<<"请输入要查找的号码：  ";
	cin>> a;
	int find=0;
	
	int len=strlen(a);
	for(int i=0;i<n;i++)
    {
    	 int ok=1;
	  for(int j=0;j<len;j++)
	  
  		 if(a[j]!=card[i].num[j])
	    {
    		ok=0;
	        break;
		 } 
		 if(ok)
		 {find=1;card_print(card[i]);}
  	   
    } 
	if(!find) cout<<"无此信息，查找失败"<<endl;	 
}

void service()
{
	cout<<"服务选项："<<endl;
	cout<<"a:添加新名片"<<endl;
	cout<<"b:查找姓名"<<endl;
	cout<<"c:查找号码"<<endl;
	cout<<"d:退出"<<endl; 
}
main()
{
	service();
	char v;

    while( cin>>v && v!='d')
   {
	switch(v)
	{
      case 'a':  card_add(++n);  break;
      case 'b':  find_name();  break;  
      case 'c':  find_num(); break;
      default:  
                cout<<"输入有误，请重新输入"<<endl<<endl; 
                service(); 
    }
    
   }
	 
}	