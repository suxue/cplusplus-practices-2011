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
	cout<<"��"<<n<<"����¼"<<endl;
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
		 cout<<"����ʧ��"<<endl;
	}
	else
	{
		 cout<<"���ҳɹ����ҵ�"<<findname<<"������"<<endl;
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
		 cout<<"����ʧ��"<<endl;
	}
	else
	{
		cout<<"���ҳɹ����ҵ�"<<findnum<<"������"<<endl;
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
        cout<<"0:���ͨѶ¼\n1:����������\n2:���������\n3:�˳�"<<endl;
        cin>>i;
        switch(i)
        {
            case 0:
				cout<<"������������";
				cin>>addname;
				cout<<"������绰���룺";
				cin>>addnum;
				add(a,addname,addnum);
                break;
            case 1:
            	cout<<"������������";
            	cin>>namefind;
            	findInName(a,namefind);
                break;
            case 2:
            	cout<<"��������룺";
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
