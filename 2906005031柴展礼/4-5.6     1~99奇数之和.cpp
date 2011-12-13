#include<iostream>
using namespace std;
int fun(int n){
	if(n==1)
	return 1;
	else
	return 2*n-1+fun(n-1);
}
int main(){
	int n;
	cout<<"Input n:"<<endl;
	cin>>n;
	cout<<"1+3+бн+ "<<2*n-1<<"="<<fun(n)<<endl;
	system("pause");
}
