#include <iostream>
using namespace std;
int main(){
	char a='A';
	while(a!='[')
		cout<<a++<<'\t';
	cout<<endl;
	while(a!='A')
		cout<<--a<<'\t';
	cout<<endl;
	return 0;
}
