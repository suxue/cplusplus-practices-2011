#include<iostream>
using namespace std;
int main(){
    int a[10];
    for(int i=0;i<=9;i++){
            a[i]=0;
            }
    cout<<"Please input 10 numbers:";
    for(int i=0;i<=9;i++){
    cin>>a[i];
    }
    int j=0;
    for(int i=0;i<=9;i++){
            if(a[i]%2==1){
                          int temp=a[j];
                          a[j]=a[i];
                          a[i]=temp;
                          j++;
                          }
            else continue; 
            }
            for(int i=0;i<j-1;i++)
            for(int k=0;k<j-i-1;k++)
            {
                    if(a[k]>a[k+1])
                    {
                                   int temp=a[k+1];
                                   a[k+1]=a[k];
                                   a[k]=temp;
			        }
			        else continue;
            }
            for(int i=j;i<8;i++)
            for(int k=j;k<10-(i-j)-1;k++)
            {
                    if(a[k]>a[k+1])
                    {
                                   int temp=a[k+1];
                                   a[k+1]=a[k];
                                   a[k]=temp;
		            }
		            else continue;
            }
         cout<<"The final order is:";
         for(int i=0;i<=9;i++){
                 cout<<a[i]<<endl;
                 }
                 system("pause");
                 return 0;    
}

