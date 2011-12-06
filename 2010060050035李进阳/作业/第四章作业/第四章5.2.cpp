#include<iostream>

#include <iomanip>

using namespace std; 
int main(int argc,char **argv) 
{ 
	const int n = 100000;    
	int k;
	double quartPI = 0.0;  
	double a = 1.0,b = 1.0;
	
	for(int i =0;i<n;i++)
	{
		quartPI += a/b;
		a *=(-1);
		b+=2;	
	}
	
	cout<<"请输入精确位数:";
	cin>>k;
	cout <<setprecision(k)<< 4*quartPI<< endl;  

	system("pause");
	return 0; 
} 
