#include<iostream>
using namespace std;
int main()
{
  int k=100;
  cout<<"the numbers are:"<<endl;
  for(;k<=200;k++){
	  if(k%3!=0&&k%7!=0){
	     cout<<k<<endl;
	  }
  }
  system("pause");
return 0;  
}
