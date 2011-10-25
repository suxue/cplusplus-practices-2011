//============================================================================
// Name        : aaaa.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a[10];

	cout<<"please input 10 number:"<<endl;
	for(int i=0;i<10;i++)
		{
		cin>>a[i];
		}

	for(int i=1;i<10;i++)
	{
		for(int j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (int i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
			cout<<a[i]<<"  ";
		}

	}
	cout<<endl;
	for (int i=0;i<10;i++)
		{
			if(a[i]%2==0)
			{
				cout<<a[i]<<"  ";
			}

		}
       cout<<endl;
	return 0;
}
