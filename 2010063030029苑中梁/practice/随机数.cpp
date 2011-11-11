#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{   
	int random;
	int size; 
	cout<<"请输入要随机产生数字的个数（例如本测试为15即输入15)"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	  {
  		random=(rand()%3)+65;
  		cout<<char(random)<<endl;
      } 
      cout<<"thanks for use it"<<endl;
      system("pause") ;
	return 0;
}