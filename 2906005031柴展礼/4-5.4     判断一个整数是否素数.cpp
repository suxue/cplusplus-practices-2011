#include<iostream>
#include<cmath>
using namespace std;
bool IsPrimeNumber(int number){
	 if(number<=1)
	 return false;
	 for(int i=2;i<sqrt(number);i++)
	 if(number%i==0)
	 return false;
	 else
	 return true;
	 }
	 int main(){
	 	 int x;
	 	 cout<<"Please input a Integer:";
	 	 cin>>x;
	 	 if(IsPrimeNumber(x))
	 	 cout<<"The integer is a prime;"<<endl;
	 	 else
	 	 cout<<"The integer is not a prime;"<<endl;
	 	 system("pause"); 
		 }
