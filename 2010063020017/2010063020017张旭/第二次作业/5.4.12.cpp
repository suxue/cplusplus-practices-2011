#include <iostream>
#include <string>
#include <string.h>

using namespace std;

const int MAXNUM=20;
int count;

typedef struct information
{
    string name;
    string telnum;
}List;

void findInName(List list[],string name)
{
	int namefind=0;
	for(int i=0;i<count;i++)
	{
		if(list[i].name.find(name)!=string::npos)
		{
			cout<<list[i].name<<"\t"<<list[i].telnum<<endl;
			namefind++;
		}
	}
	if(namefind!=0)
	{
		cout<<"��ѯ���������ҵ�"<<namefind<<"�����������"<<endl; 
	}
	else
	{
		cout<<"δ�ҵ����������"<<endl;
	}
}

void findInNum(List list[],string telnum)
{
    int telnumfind=0;
	for(int i=0;i<count;i++)
	{
		if(list[i].telnum.find(telnum)!=string::npos)
		{
			cout<<list[i].telnum<<"\t"<<list[i].name<<endl;
			telnumfind++;
		}
	}
	if(telnumfind!=0)
	{
		cout<<"��ѯ���������ҵ�"<<telnumfind<<"����غ��롣"<<endl; 
	}
	else
	{
		cout<<"δ�ҵ���غ��롣"<<endl;
	}
}

void add(List list[],string name,string telnum)
{
	list[count].name=name;
	list[count].telnum=telnum;
	count++;
	cout<<"�����ɣ����ڹ���"<<count<<"����¼"<<endl;
}

int main()
{
	List list[20];
	count=0;
    int order;
    bool isRun=true;
    string nameadd,telnumadd,namefind,telnumfind;
    while(isRun)
    {
        cout<<"������ָ�\n1�������Ϣ��ͨѶ¼\n2������������\n3�����������\n4���˳�"<<endl;
        cin>>order;
        switch(order)
        {
            case 1:
				cout<<"�����������Ϣ��"<<endl;
				cout<<"������";
				cin>>nameadd;
				cout<<"�绰���룺";
				cin>>telnumadd;
				add(list,nameadd,telnumadd);
                break;
            case 2:
            	cout<<"��������Ҫ���ҵ�������";
            	cin>>namefind;
            	findInName(list,namefind);
                break;
            case 3:
            	cout<<"��������Ҫ���ҵĺ��룺";
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

