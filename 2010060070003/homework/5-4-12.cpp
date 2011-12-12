#include <iostream>
#include <string>

using namespace std;

const int MAXNUM=20;
int n;

typedef struct information
{
    string name;
    string num;
}List;

void add(List a[],string name,string num)
{
	a[n].name=name;
	a[n].num=num;
	n++;
	cout<<"有"<<n<<"个记录"<<endl;
}


void findInName(List a[],string name)
{
	int findname=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].name.find(name)!=string::npos)
		{
			cout<<a[i].name<<"\t"<<a[i].num<<endl;
			findname++;
		}
	}
	if(0==findname)
	{
		 cout<<"查找失败"<<endl;
	}
	else
	{
		 cout<<"查找成功，找到"<<findname<<"个姓名"<<endl;
	}
}

void findInNum(List a[],string num)
{
    int findnum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].num.find(num)!=string::npos)
		{
			cout<<a[i].num<<"\t"<<a[i].name<<endl;
			findnum++;
		}
		else continue;
	}
	if(0==findnum)
	{
		 cout<<"查找失败"<<endl;
	}
	else
	{
		cout<<"查找成功，找到"<<findnum<<"个号码"<<endl;
	}
}

int main()
{
	List a[20];
	int n=0;
    int i;
    bool p=true;
    string addname,addnum,namefind,numfind;
    while(p)
    {
        cout<<"0:添加通讯录\n1:按姓名查找\n2:按号码查找\n3:退出"<<endl;
        cin>>i;
        switch(i)
        {
            case 0:
				cout<<"请输入姓名：";
				cin>>addname;
				cout<<"请输入电话号码：";
				cin>>addnum;
				add(a,addname,addnum);
                break;
            case 1:
            	cout<<"请输入姓名：";
            	cin>>namefind;
            	findInName(a,namefind);
                break;
            case 2:
            	cout<<"请输入号码：";
            	cin>>numfind;
            	findInNum(a,numfind);
            	break;
            case 3:
                p=false;
                break;
        }
    }
	return 0;            
}
