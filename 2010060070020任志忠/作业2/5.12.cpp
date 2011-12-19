#include <iostream>
#include <string>
#include <string.h>

using namespace std;

const int MAXNUM=20;
int x;

typedef struct information
{
    string name;
    string telnum;
}List;

void findInName(List list[],string name)
{
	int namefind=0;
	for(int i=0;i<x;i++)
	{
		if(list[i].name.find(name)!=string::npos)
		{
			cout<<list[i].name<<"\t"<<list[i].telnum<<endl;
			namefind++;
		}
	}
	if(namefind!=0)
	{
		cout<<"查询结束，共找到"<<namefind<<"个相关姓名。"<<endl; 
	}
	else
	{
		cout<<"未找到相关姓名。"<<endl;
	}
}

void findInNum(List list[],string telnum)
{
    int telnumfind=0;
	for(int i=0;i<x;i++)
	{
		if(list[i].telnum.find(telnum)!=string::npos)
		{
			cout<<list[i].telnum<<"\t"<<list[i].name<<endl;
			telnumfind++;
		}
	}
	if(telnumfind!=0)
	{
		cout<<"查询结束，共找到"<<telnumfind<<"个相关的号码。"<<endl; 
	}
	else
	{
		cout<<"未找到相关的号码。"<<endl;
	}
}

void add(List list[],string name,string telnum)
{
	list[x].name=name;
	list[x].telnum=telnum;
	x++;
	cout<<"添加完成，现在共有"<<x<<"条记录"<<endl;
}

int main()
{
	List list[20];
	x=0;
    int order;
    bool isRun=true;
    string nameadd,telnumadd,namefind,telnumfind;
    while(isRun)
    {
        cout<<"请输入指令：\n1、添加信息到通讯录\n2、按姓名查找\n3、按号码查找\n4、退出"<<endl;
        cin>>order;
        switch(order)
        {
            case 1:
				cout<<"请输入相关信息："<<endl;
				cout<<"姓名：";
				cin>>nameadd;
				cout<<"电话号码：";
				cin>>telnumadd;
				add(list,nameadd,telnumadd);
                break;
            case 2:
            	cout<<"请输入你要查找的姓名：";
            	cin>>namefind;
            	findInName(list,namefind);
                break;
            case 3:
            	cout<<"请输入您要查找的号码：";
            	cin>>telnumfind;
            	findInNum(list,telnumfind);
            	break;
            case 4:
                isRun=false;
                break;
        }
    }
	return 0;            
}
