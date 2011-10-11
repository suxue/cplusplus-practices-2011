#include <iostream>
using namespace std;
int main()
{
	float x,y;/*x is the weight,y is the distance*/
	cout<<"enter the weight:"<<endl;
	cin>>x;
	cout<<"enter the distance:"<<endl;
	cin>>y;
	if(x>0)
	{
		switch((int)(x/15))
		{
			case 0:
			cout<<"The price is:5";
			break;
			case 1:
			cout<<"The price is:9";
			break;
			case 2:
			cout<<"The price is:12";
			break;
			case 3:
			cout<<"The price is:"<<14+y/1000;
			break;
			default:
			cout<<"The price is:"<<15+y/1000;
			break;
		}
	}
	else
	cout<<"error!";

}