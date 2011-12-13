#include<iostream>
using namespace std;
double fun(double x,unsigned y){
	   if(y==0)
	   return 1;
	   else
	   return x*fun(x,y-1);
	   }
	   int main(){
	   	   double x;
	   	   unsigned y;
	   	   cout<<"Input x,y:"<<endl;
	   	   cin>>x>>y;
	   	   cout<<x<<"的"<<y<<"次方是"<<fun(x,y)<<endl;
	   	   system("pause"); 
		   }
