#include<iostream>
using namespace std;
int main()
{
	int n,i=0;
	cout<<"Please input a number"<<'\n';
	cin>>n;
	while(n>0)
    {
      i++;
      cout<<n%10;
      n=n/10;   
    }
	cout<<endl<<i<<endl;
	return 0;
}