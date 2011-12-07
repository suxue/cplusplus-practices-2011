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
	  cout<<"电话本已满"<<endl;
    else
	  cout<<"已添加新名片，共有"<<n<<"张名片"<<endl;
   cout<<"请继续输入执行命令。"<<endl;
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
		cout<<"共找到"<<find<<"个相关号码。"<<endl;
	}
	else
	{
		cout<<"未找到号码。"<<endl;
	}
	cout<<"请继续输入执行命令。"<<endl;
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
		cout<<"共找到"<<find<<"个相关号码。"<<endl;
	}
	else
	{
		cout<<"未找到号码。"<<endl;
	}
		cout<<"请继续输入执行命令。"<<endl;
}

void help()
{
    cout<<"请输入执行命令"<<endl;
    cout<<"A->加入新名片"<<endl;
    cout<<"B->通过号码寻找"<<endl;
    cout<<"C->通过姓名寻找"<<endl;
    cout<<"D->离开"<<endl<<endl;

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
                cout<<"请输入姓名：";
                cin>>na;
				cout<<"请输入电话号码：";
				cin>>ta;
				add(book,na,ta);
				break;
      case 'B':
                cout<<"请输入您要查找的号码："<<endl;
                cin>>tf;
                findinNum(book,tf);
                break;
      case 'C':
                cout<<"请输入你要查找的姓名："<<endl;
                cin>>nf;
                findinName(book,nf);
                break;
      case 'D':
                temp=false;
                break;
      default:
                cout<<"输入有误，请重新输入"<<endl;
    }

  }
  return 0;
}

