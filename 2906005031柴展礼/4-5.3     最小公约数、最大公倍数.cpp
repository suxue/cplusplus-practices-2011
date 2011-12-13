#include<iostream>
using namespace std;
int Divisor(int a,int b){
	int temp,i;
	if(a>b)
	temp=b;
	else
	temp=a;
	
	for(i=temp;i>=1;i--){
						 if((a%i==0)&&(b%i==0))
						 break;
						 }
						 return i;
						 }
    int Multiple(int a,int b){
	int temp,i;
	if(a>b)
	temp=a;
	else
	temp=b;
	
	for(i=temp;i<=a*b;i++){
						 if((i%a==0)&&(i%b==0))
						 break;
						 }
						 return i;
						 }
	int main(){
		int m,n;
		cout<<"Please input two positive integer:"<<endl;
		cin>>m>>n;
		cout<<"The max common divisor of the two integers is:"<<Divisor(m,n)<<endl;
		cout<<"The min common multiple of the two integers is:"<<Multiple(m,n)<<endl;
		system("pause");
		}
