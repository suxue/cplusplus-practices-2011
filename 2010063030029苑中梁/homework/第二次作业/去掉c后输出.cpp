#include <iostream>
using namespace std;
int main()
{
  cout<<"请输入一组数"<<endl; 
  char str[255];
  char *p=str;
  cin>>str;
  while(*p)
  {
    if(*p!='c')
    cout<<*p;
    p++;
  }
    cout<<endl;
	return 0;
}