#include<iostream>
using namespace std;

typedef struct {
	char name[100],num[100];
}Card;
Card card[1000];
	int n=0;
void card_add(int n)
{
	cout<<"������������  ";
	cin>>card[n].name;
	cout<<"��������룺  ";
	cin>>card[n].num; 
}

void card_print(Card c)
{
	cout<<"������"<<c.name<<"\t"<<"���룺" <<c.num<<endl;
}

void find_name()
{
	char* a;
	cout<<"������Ҫ���ҵ�������  ";
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
	if(!find) cout<<"�޴���Ϣ������ʧ��"<<endl;	 
}

void find_num()
{
	char* a;
	cout<<"������Ҫ���ҵĺ��룺  ";
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
	if(!find) cout<<"�޴���Ϣ������ʧ��"<<endl;	 
}

void service()
{
	cout<<"����ѡ�"<<endl;
	cout<<"a:�������Ƭ"<<endl;
	cout<<"b:��������"<<endl;
	cout<<"c:���Һ���"<<endl;
	cout<<"d:�˳�"<<endl; 
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
                cout<<"������������������"<<endl<<endl; 
                service(); 
    }
    
   }
	 
}	