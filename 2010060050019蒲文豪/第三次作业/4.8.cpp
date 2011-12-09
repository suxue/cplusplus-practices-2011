#include<iostream>
using namespace std;
main(){
	string a;
	int str;	
	while(cin>>a)
	{
	   int j=0;
	   str=a.size();
  	   for(int i=0;i<str/2;i++)
 	    {
    	 	 if(a[i]!=a[str-1-i])
  	       {cout<<"不是回文\n";j=1;break;} 
    	 }   
		if(j==0) cout<<"是回文\n";
	}
}