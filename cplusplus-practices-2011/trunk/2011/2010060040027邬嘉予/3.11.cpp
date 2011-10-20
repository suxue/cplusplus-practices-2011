#include<iostream>
using namespace std;
int main()
{
  int k,l;
  cout<<"Enter a weight:";
  cin>>k;
  cout<<"Enter the distance:";
  cin>>l;
  if(k<=75){
  switch(k/15)
   {
  	case 0:
  	   cout<<5<<endl;
  	   break;
  	case 1:
  	   cout<<9<<endl;
  	   break;
	case 2:
	   cout<<12<<endl;
	   break;
	case 3:
	   cout<<14+l/1000<<endl;
	   break;
   }
  }
  else{
      cout<<15+l/1000<<endl;
  }

}


