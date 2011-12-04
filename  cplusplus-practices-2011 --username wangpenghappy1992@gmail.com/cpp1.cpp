#include<iostream> 
using namespace std;
#define amount 10
int main(){
	int i;
	int a[amount];
		void sort(int *,int ); 
	
    cout<<"ÊäÈë10¸öÊý"; 
	for(i=0;i<amount;i++){
		cin>>a[i];
	}
	
	sort(&a[0],amount);
	while(i<amount)
	{
		if(a[i]%2!=0)
		{
			cout<<a[i]<<'\t';
		}
		i++;
	}
	for(i=0;i<amount;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<<'\t';
		}
	}
	cout<<endl;
	return 1; 
} 
void sort(int *p,int n){ 
	int i,temp,j;
	
	for(i=0;i<n-1;i++)
	{
	   for(j=i+1;j<n;j++)
	   {
   		if(*(p+i)>*(p+j))
   		 {
		   	temp=*(p+i);
		   	*(p+i)=*(p+j);
		   	*(p+j)=temp;
	     }
   	   }
	}
}