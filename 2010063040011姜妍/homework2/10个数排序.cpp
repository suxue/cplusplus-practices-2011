#include<iostream>
using namespace std;
int main(){
     int Aa[10]={0};
     int i,j,n;
     int temp;
     cout<<"ÊäÈë10¸öÊý:";
     for(i=0;i<10;i++){
                       cout<<"Aa["<<i<<"]=";
                       cin>>Aa[i];
                       }
for(i=1;i<10;i++)
   for(j=0;j<10-i;j++)
         if(Aa[j]>Aa[j+1]){
                           temp=Aa[j];
                           Aa[j]=Aa[j+1];
                           Aa[j+1]=temp;
                           }
     for(i=0;i<10;i++)
          if(Aa[i]%2!=0)
          cout<<Aa[i]<<'\t';
     for(i=0;i<10;i++) 
         if(Aa[i]%2==0)
         cout<<Aa[i]<<'\t';
      cin>>n;
      return 0;
      }
           
