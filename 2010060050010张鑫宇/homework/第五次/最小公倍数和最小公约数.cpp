#include <iostream>
using namespace std;
int hcf(int x,int y)
{
	
	int t,r;
	while(x!=y){
		if (x>y)
		x=x-y;
		else if (y>x)
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
	cout<<"input two numbers:";
	cin>>x>>y;
	cout<<"���Լ����"<<hcf(x,y)<<endl<<"��С��������"<<lcd(x,y)<<endl;
	return 0;
}