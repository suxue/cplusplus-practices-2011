#include<iostream>
#include<algorithm> 
using namespace std;

void Num(int* A)
{
  for(int i=0;i<10;i++)
  {  
    cin>>A[i]; 
   }
}
bool compare(int x,int y)
{
  return x<y;
}

int main()
{
  int* A;
  A=new int[10];

  Num(A);
  sort(A,A+10,compare);
  
  for(int i=0;i<10;i++) 
  {
   if(A[i]%2) cout<<A[i]<<endl;  
   }
  for(int i=0;i<10;i++) 
   {
   if(!(A[i]%2)) cout<<A[i]<<endl; 
    }
   
   return 0;
}
