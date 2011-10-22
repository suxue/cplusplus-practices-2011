// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;
int main()
{
	int i,j,b[10],k=0,l=0,a[10],temp;
	
	cout<<"输入十个数\n";
	for(i=0;i<10;i++)
	cin>>a[i]; 
	for(i=0;i<10;i++){
       for(j=i+1;j<10;j++){
       if(a[i]>a[j]){
         temp=a[i];
          a[i]=a[j];
         a[j]=temp;}}}
         for(i=0;i<10;i++){
          
         if(a[i]%2==0){
         b[k]=a[i];
         l++;
         k++;}}
         for(i=0;i<10;i++){
         	if(a[i]%2!=0)
         	cout<<a[i]<<" ";
         	}
          
         for(k=0;k<l;k++){
         cout<<b[k]<<" ";}
         
         
    
    return 0;
}