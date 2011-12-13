#include<iostream>
using namespace std;
int main(){
	int a[10],i,j,m,n,temp;
	cout<<"Please input 10 integers:"<<endl;
	for(i=0;i<10;i++)
	cin>>a[i];{
	for(m=0;m<9;m++){
	for(n=m+1;n<10;n++)
	if(a[m]>a[n]){
	temp=a[m];a[m]=a[n];a[n]=temp;}
}
}
	cout<<"The numbers' order is:"<<endl;
	for(j=0;j<10;j++)
	{
	 				 if(a[j]%2!=0)
	 				 cout<<a[j]<<"\t"<<endl;
					 }
					 for(j=0;j<10;j++)
					 {
					  				  if(a[j]%2==0)
					  				  cout<<a[j]<<"\t"<<endl;
									  }
									  system("pause"); 
									  }
