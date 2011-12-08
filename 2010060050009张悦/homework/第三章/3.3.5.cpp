#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    char a;
    for(a='A';a<='Z';a++)
    cout <<a<<" ";
    cout <<"\n";
    for(a='Z';a>='A';a--)
      cout <<a<<" ";
    system("pause");
    return 0;
}
