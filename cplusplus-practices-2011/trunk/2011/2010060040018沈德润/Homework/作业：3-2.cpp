// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;
int main()
{
	int i=100;
	cout<<"不能被3整除也不能被7整除的数有：\n";
	for(i=100;i<=200;i++)
	if(i%3!=0&&i%7!=0)
	cout<<i<<"  "  ;
    
    return 0;
}