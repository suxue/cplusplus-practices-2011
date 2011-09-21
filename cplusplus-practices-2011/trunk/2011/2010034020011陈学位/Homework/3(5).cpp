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
		printf("输入数字进入对应功能：\n");
		printf("1.正向输出26个大写字母\n");
		printf("2.逆向输出26个大写字母\n");
		printf("3.退出\n");
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
			cout<<"输入有误，请重新输入\n";
		}
		cout<<endl;
	}
	printf("已退出\n");
	return 0;
}
