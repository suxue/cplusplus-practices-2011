#include<iostream>
using namespace std;
int main()
{
  int k,l;
  cout<<"Enter a weight:";
  cin>>k;
  cout<<"Enter the distance:";
  cin>>l;
   if(0<k<=15) 
     cout<<5<<endl;
   else if(15<k<=30) 
      cout<<9<<endl;
   else if(30<k<=45) 
      cout<<12<<endl;
   else if(45<k<=60) 
      cout<<14+l/1000<<endl; 
   else  
      cout<<15+l/1000<<endl;    
  system("pause");
}
