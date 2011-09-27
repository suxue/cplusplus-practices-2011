#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
  for(int i=100;i<=200;i++)
    if((i%3)!=0&&(i%7)!=0)  cout<<'\t'<<i<<endl;
  system("PAUSE");	
  return 0;
}
