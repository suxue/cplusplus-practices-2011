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
		printf("����1ʹ�������100-200֮�䲻�ܱ�3Ҳ���ܱ�7��������\n����0�˳�\n");
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
			printf("������������������\n");
		}
		cout<<endl;
	}
	printf("���˳�\n");
	return 0;
}
