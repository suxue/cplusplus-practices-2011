//============================================================================

// Name        : task1.cpp

// Author      : 

// Version     :

// Copyright   : Your copyright notice

// Description : Hello World in C++, Ansi-style

//============================================================================


#include <iostream>

using namespace std;


int main()

{
   
    int i,j=0;
  
    for(i=100;i<=200;i++)
	 
    if(i%3!=0&&i%7!=0)
	 
   {
		  
    cout<<i<<'\t';
		
     j++;
		 
    if(j%6==0)
		  	
      cout<<endl;
	 
   }
	
   return 0;

}
