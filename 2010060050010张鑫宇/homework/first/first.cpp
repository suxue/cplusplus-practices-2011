#include<iostream>
using namespace std;
int main()
{
	int j;
	for(j=100;j<=200;j++){
	if(j%3!=0||j%7!=0)continue;
	cout<<j<<endl;	
	}
	
	return 0;
}