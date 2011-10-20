#include<iostream>
int main()
{
  int k=100;
  std::cout<<"the numbers are:"<<std::endl;
  for(k=100;k<=200;k++){
	  if(k%3!=0&&k%7!=0){
	     std::cout<<k<<std::endl;
	  }
  }
}
