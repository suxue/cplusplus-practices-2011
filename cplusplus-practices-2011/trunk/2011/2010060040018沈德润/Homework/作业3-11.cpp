#include <iostream>
using namespace std;
int main()
{
	int i,l,j,k,m;
	cout<<"input the weight of you package";
	cin>>i;
	cout<<"input the amount of you package";
	cin>>j;
	cout<<"input the range of the package";
	cin>>l;
	k=l/1000;
	if(i<=15){
		m=5*j;
		cout<<"the postage of you package is:"<<m;
	}
	else if(i>15&&i<=30){
		m=9*j;
		cout<<"the postage of you package is:"<<m;
	}
	else if(i>30&&i<=45){
		m=12*j;
		cout<<"the postage of you package is:"<<m;
	}
	else if(i>45&&i<=60){
		m=14*j+k;
		cout<<"the postage of you package is:"<<m;
	}
	else{
	m=15*j+k;
	cout<<"the postage of you package is:"<<m;
	}
    
    return 0;
}