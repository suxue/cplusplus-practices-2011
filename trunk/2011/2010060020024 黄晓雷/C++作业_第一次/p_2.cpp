//��д���򣬷ֱ������������26����дӢ����ĸ
#include<iostream>
using namespace std;
int main()
{
	char a='A';
	int i=26;
	cout<<"���������"<<endl;
	while(i--)
		cout<<a++<<" ";
	cout<<endl;
	cout<<"���������"<<endl;
	i = 26;
	while(i--)
		cout<<--a<<" ";
	cout<<endl;

	return 0;
}
