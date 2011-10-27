#include<iostream>
#include<algorithm> 
using namespace std;

bool cmp(int x,int y)
{
  return x<y;
}

void GetNum(int* entry)
{
  for(int i=0;i<10;i++)  cin>>entry[i]; 
}

int main()
{
  int* entry;
  entry=new int[10];

  GetNum(entry);
  sort(entry,entry+10,cmp);
  
  for(int i=0;i<10;i++) 
   if(entry[i]%2) cout<<entry[i]<<" "; 
  for(int i=0;i<10;i++) 
   if(!(entry[i]%2)) cout<<entry[i]<<" "; 
   
   return 0;
}
