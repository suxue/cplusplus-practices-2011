#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"please input a word"<<endl;
	char ch[100],n,ah[100];
	cin>>ch;
	int i=0;
	while(ch[i])
	{
		i++;
	}
	int d=0;
	cout<<"��������"<<endl;
	for(int a=0;a<i;a++)
	{
		cout<<ch[a];
	} cout<<"\n";
	for(int a=i-1;a>=0&&d<=i;a--,d++)
	{
		ah[d]=ch[a];
	}
	cout<<"�෴����"<<endl; 
	for(int a=0;a<i;a++)
	{
		cout<<ah[a];
	}cout<<"\n"; 
	int g=0, a=0;
	for( a=0;a<i;a++)
	{
		if(ah[a]!=ch[a])
		{
		cout<<"������ǻ�������"<<endl;
		break;
		}
	     
	}

	if(a==i)
	{cout<<"����ǻ�������"<<endl;}
	
	
} 
