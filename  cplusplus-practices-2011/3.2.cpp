#include<iostream>
using namespace std;

int main()
{
  for(int i=100;i<=200;i++)
    if(i%3!=0&&i%7!=0) cout<<"\t"<<i;
  return 0;
}
