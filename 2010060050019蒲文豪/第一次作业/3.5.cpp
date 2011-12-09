#include<iostream>
using namespace std;
main()
{
	char a;
	cout<<"正向输出："<<endl;
	for(a='A';a<='Z';a++)
	  cout<<a;
 	cout<<"\n反向输出："<<endl;
 	for(a='Z';a>='A';a--)
	  cout<<a;
}