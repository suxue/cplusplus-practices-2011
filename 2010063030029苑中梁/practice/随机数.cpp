#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{   
	int random;
	int size; 
	cout<<"������Ҫ����������ֵĸ��������籾����Ϊ15������15)"<<endl;
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