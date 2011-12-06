#include<iostream>
#include<cmath>
using namespace std;
bool IsPrimeNumber(int number)
{
	if(number<=1)
	return false;
	int i=2;
	for(;i<sqrt(number);i++)
	if(number%i==0)
	return false;
	return true;

}
int main()
{
	int x;
	cout<<"please input a number:";
	cin>>x;
	if(IsPrimeNumber(x))
	cout<<"It's a prime number";
	else
	cout<<"It's not a prime number";
}