#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	while(true) 
	{
		printf("�������ֽ����Ӧ���ܣ�\n");
		printf("1.�������26����д��ĸ\n");
		printf("2.�������26����д��ĸ\n");
		printf("3.�˳�\n");
		int n;
		cin>>n;
		if(n==1)
		{
			for(char i='A';i<='Z';i++)
			{
				cout<<i<<" ";
			}
		}
		else if(n==2)
		{
			for(char i='Z';i>='A';i--)
			{
				cout<<i<<" ";
			}
		}
		else if(n==3)
		{
			break;
		}
		else 
		{
			cout<<"������������������\n";
		}
		cout<<endl;
	}
	printf("���˳�\n");
	return 0;
}
