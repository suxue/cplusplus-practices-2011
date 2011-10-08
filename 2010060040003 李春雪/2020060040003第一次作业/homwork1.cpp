#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	for(i=100;i>200;i++)
	{
		if(i%3==0){
			cout<<i<<'\t';
		}else if(i%7==0){
			cout<<i<<'\t';
		}
		return 0;
	}
}