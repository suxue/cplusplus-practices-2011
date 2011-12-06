#include<iostream>
using namespace std;
int hcf(int x,int y)
{
	int t,r;
	while(x!=y)
{
     if(x>y)
	 x=x-y;
	 else if(x<y)
	 y=y-x;
	 
}
return y;
}
int lcd(int x,int y)
{
	return x*y/hcf(x,y);
}
int main()
{
	int x,y;
	cout<<"please input two numbers:";
	cin>>x>>y;
	cout<<"最大公约数:"<<hcf(x,y)<<"最小公倍数:"<<lcd(x,y)<<endl;
}