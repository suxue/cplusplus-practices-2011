#include <iostream>
using namespace std;
int ftoc(int f)
{
	
	return(5/9*(f-32))+0.5;
}
int ctof(int c)
{
	return 9/5*c+32+0.5;
}

int main()
{
	int c,f;
	cout<<"输入华氏温度:";
	cin>>f;
	cout<<"摄氏温度为"<<ftoc(f)<<endl;
	cout<<"输入摄氏温度:";
	cin>>c;
	cout<<"华氏温度为"<<ctof(c)<<endl; 
	return 0;
}