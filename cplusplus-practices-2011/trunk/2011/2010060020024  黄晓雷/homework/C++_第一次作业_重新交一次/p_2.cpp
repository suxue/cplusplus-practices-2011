//编写程序，分别正向、逆向输出26个大写英文字母
#include<iostream>
using namespace std;
int main()
{
	char a='A';
	int i=26;
	cout<<"正向输出："<<endl;
	while(i--)
		cout<<a++<<" ";
	cout<<endl;
	cout<<"逆向输出："<<endl;
	i = 26;
	while(i--)
		cout<<--a<<" ";
	cout<<endl;

	return 0;
}
