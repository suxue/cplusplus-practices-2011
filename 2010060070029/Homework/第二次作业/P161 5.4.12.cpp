#include <iostream>
#include <string>
#include <string.h>

using namespace std;

const int MAX=100;
int n=0;

typedef struct phonebook
{
    string name;
    string num;
}Book;

void add(Book book[],string name,string num)
{
	book[n].name=name;
	book[n].num=num;
	n++;
	if(n>MAX)
	  cout<<"�绰������"<<endl;
    else
	  cout<<"���������Ƭ������"<<n<<"����Ƭ"<<endl;
   cout<<"���������ִ�����"<<endl;
}
void findinName(Book book[],string name)
{
    int find=0;
	for(int i=0;i<n;i++)
	{
		if(book[i].name.find(name)!=string::npos)
		{
			cout<<book[i].name<<"\t"<<book[i].num<<endl;
			find++;
		}
	}
  	if(find!=0)
	{
		cout<<"���ҵ�"<<find<<"����غ��롣"<<endl;
	}
	else
	{
		cout<<"δ�ҵ����롣"<<endl;
	}
	cout<<"���������ִ�����"<<endl;
}


void findinNum(Book book[],string num)
{
      int find=0;
	for(int i=0;i<n;i++)
	{
		if(book[i].num.find(num)!=string::npos)
		{
			cout<<book[i].name<<"\t"<<book[i].num<<endl;
			find++;
		}
	}
		if(find!=0)
	{
		cout<<"���ҵ�"<<find<<"����غ��롣"<<endl;
	}
	else
	{
		cout<<"δ�ҵ����롣"<<endl;
	}
		cout<<"���������ִ�����"<<endl;
}

void help()
{
    cout<<"������ִ������"<<endl;
    cout<<"A->��������Ƭ"<<endl;
    cout<<"B->ͨ������Ѱ��"<<endl;
    cout<<"C->ͨ������Ѱ��"<<endl;
    cout<<"D->�뿪"<<endl<<endl;

}

int main()
{
    Book book[110];
    bool temp=true;
    string na,ta,nf,tf;
    char ask;
    help();
  while(temp)
  {
    cin>>ask;
    switch(ask)
    {
      case 'A':
                cout<<"������������";
                cin>>na;
				cout<<"������绰���룺";
				cin>>ta;
				add(book,na,ta);
				break;
      case 'B':
                cout<<"��������Ҫ���ҵĺ��룺"<<endl;
                cin>>tf;
                findinNum(book,tf);
                break;
      case 'C':
                cout<<"��������Ҫ���ҵ�������"<<endl;
                cin>>nf;
                findinName(book,nf);
                break;
      case 'D':
                temp=false;
                break;
      default:
                cout<<"������������������"<<endl;
    }

  }
  return 0;
}

