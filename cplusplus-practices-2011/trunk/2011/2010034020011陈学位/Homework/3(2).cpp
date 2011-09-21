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
		int n;
		printf("输入1使程序输出100-200之间不能被3也不能被7整除的数\n输入0退出\n");
		scanf("%d",&n);
		if(n==1)
		{
			for(int i=100;i<=200;i++)
			{
				if(i%3!=0&&i%7!=0)
				{
					printf("%d\n",i);
				}
			}
		}
		else if(n==0)
		{
			break;
		}
		else 
		{
			printf("输入有误，请重新输入\n");
		}
		cout<<endl;
	}
	printf("已退出\n");
	return 0;
}
