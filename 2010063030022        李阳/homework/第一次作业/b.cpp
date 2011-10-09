#include<iostream>
using namespace std;
int main()
{
    int i;
    char A[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(i=0;i<26;i++)
    {
        cout<<A[i]<<endl;
    }
    for(i=25;i>=0;i--)
    {
        cout<<A[i]<<endl;
    }
}
