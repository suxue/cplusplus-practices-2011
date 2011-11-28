#include <iostream>
#include <string>

using namespace std;


int main()
{
	string a[10];
	a[0]="Tom";
	a[1]="Jack";
	a[2]="Bob";
	a[3]="Mike";
	a[4]="Linda";
	a[5]="241243354";
	a[6]="2444234342354";
	a[7]="24127967354";
	a[8]="2413433354";
	a[9]="241787554";
	string b;
	int i,m,n,s;
	cout<<"ÇëÊäÈë£º"<<endl;
	gets(b);
	for(i=0;i<10;i++)
	{
		s=strcmp(b,a[i]);
		if(s==0&&i<5)
		{
			cout<<a[i]<<'\t'<<a[i+5]<<endl;
		}
		else if(s==0&&i>=5)
		{
			cout<<a[i]<<'\t'<<a[i-5]<<endl;
		}
		
	}
	

	return 0;
}