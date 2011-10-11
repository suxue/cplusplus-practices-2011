#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=65;i<=90;i++)
		{
		cout<<(char)i<<'\t';
	    }
	cout<<endl;
	for(i=90;i>=65;i--)
		{
			cout<<(char)i<<'\t';
		}

}