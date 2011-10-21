#include<iostream>
#include <cstdio>
using namespace std;
int main(){
	int i=0;
	int j=0;
	char chars1[100];
	char chars2[100];
	scanf("%s",chars1);
	while(chars1[i]!='\0')
	{
		if(chars1[i]!='c')
		{
			chars2[j]=chars1[i];
			j++;
		}
		i++;		
	}
	for(int i=0;i<j;i++)
		printf("%c",chars2[i]);
}