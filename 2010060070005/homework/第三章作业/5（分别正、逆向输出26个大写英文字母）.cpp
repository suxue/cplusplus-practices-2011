#include <iostream>
using namespace std;
int main()
{
  char letter;
  for(letter='A';letter<='Z';letter++)
  cout<<letter<<"";

  for(letter='Z';letter>='A';letter--)
  cout<<letter<<"";
  system("pause");
}
