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
	cout<<"���뻪���¶�:";
	cin>>f;
	cout<<"�����¶�Ϊ"<<ftoc(f)<<endl;
	cout<<"���������¶�:";
	cin>>c;
	cout<<"�����¶�Ϊ"<<ctof(c)<<endl; 
	return 0;
}