#include<iostream>
using namespace std;
int main()
{
char letter='a';
int i=1,j=1;
	for(;i<=26;i++){
		cout<<letter<<endl;
		letter=letter+1;
	}
	for(;j<=27;j++){
		cout<<letter<<endl;
		letter=letter-1;
	}
	return 0;
}