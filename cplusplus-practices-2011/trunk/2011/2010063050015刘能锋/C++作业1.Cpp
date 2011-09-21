#include<iostream>
using namespace std;
int main()
{ int i;
  cout<<"100至200之间不能被3和7整除的数有:"<<endl; 
 for(i=100;i<=200;i++)
	if(i%3!=0&&i%7!=0) cout<<i<<"\t";
	cout<<endl; 
}
