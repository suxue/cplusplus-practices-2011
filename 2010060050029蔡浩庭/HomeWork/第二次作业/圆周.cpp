#include<iostream>
#include<cmath>
using namespace std;
double get_PI(double i)
{
	int n=1;
	int z=1;
	double num=z*1.0/n;
	while(fabs(z*1.0/n)*4>=i)
	{
		z*=-1;
		n+=2;
		num+=(z*1.0/n);
	}
	return num*4;
}
int main(int argc, char *argv[]){
	double i,pi4=0;
	cout<<"输入精确度"<<endl;
	cin>>i;
    pi4=get_PI(i);
	cout<<"四分之PI是：\n"<<pi4<<endl;
	return 0;
	
}