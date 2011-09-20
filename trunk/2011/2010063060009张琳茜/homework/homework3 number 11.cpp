#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"please input the package weight and the distance"<<endl;
	cin>>a>>b;
	if(a==15)
	{
		   c=5;
		   cout<<"you should pay "<<c<<endl;
	}
	else  if(a==30)
	{
		   c=9;
		   cout<<"you should pay "<<c<<endl;
	}
    if(a==45)
	{
		   c=12;
		   cout<<"you should pay "<<c<<endl;
	}
	else if(a==60)
	{
		   c=14+b/1000;
		   cout<<"you should pay "<<c<<endl;
	}
	if(a%15!=0){
	switch(a/15)
	{
	case 0:c=5;
		   cout<<"you should pay "<<c<<endl;
		   break;
	case 1:c=9;
		   cout<<"you should pay "<<c<<endl;
		   break;
    case 2:c=12;
		   cout<<"you should pay "<<c<<endl;
		   break;
    case 3:c=14+b/1000;
		   cout<<"you should pay "<<c<<endl;
		   break;
	default:c=15+b/1000;
		   cout<<"you should pay "<<c<<endl;
	}
	}
	return 0;
}