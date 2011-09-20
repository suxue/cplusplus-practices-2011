#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter the weight"<<endl;
	cin>>n;
	cout<<"enter the distance"<<endl;
	cin>>m;
	if(n>15)
		if(n>30)
			if(n>45)
				if(n>60)
					{if(n>75)cout<<"The price is"<<15+m/1000<<endl;}
				else
					cout<<"The price is"<<14+m/1000<<endl;
			else
				cout<<"The price is 12"<<endl;
		else
			cout<<"The price is 9"<<endl;
	else
		cout<<"The price is 5"<<endl;
}
