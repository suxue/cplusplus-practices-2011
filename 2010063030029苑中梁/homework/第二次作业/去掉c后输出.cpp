#include <iostream>
using namespace std;
int main()
{
  cout<<"������һ����"<<endl; 
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