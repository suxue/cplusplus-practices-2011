#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i=0;i<=200;i++)
      if(i%3==0||i%7==0)
          continue;
          else
          cout<<i<<endl;
}
