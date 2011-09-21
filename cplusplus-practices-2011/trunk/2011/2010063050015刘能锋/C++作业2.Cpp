#include<iostream>
using namespace std;
int main()
{ char A='A',Z='Z';
  int i,j;
  for(i=0;i<26;i++)
   cout<<char(A+i)<<"\t";
   cout<<endl;
  for(i=0;i<26;i++)
   cout<<char(Z-i)<<"\t";
   cout<<endl; 
}