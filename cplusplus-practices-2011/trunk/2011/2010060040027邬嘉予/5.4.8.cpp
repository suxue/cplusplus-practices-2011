#include<iostream>
#include<string.h>
using namespace std;

int n;
void deng(char c[100],int n)
{
    int y,i;
    y=0;
    for(i=0;i<=(n-1)/2;i++)
        if(c[i]!=c[n-i-1])
        {
          y=1;
        }
     if (y==1)
       cout<<"不是回文"<<endl;
     else
       cout<<"是回文"<<endl;
}
main()
{
  int j;
  char c[100];
 cin>>c;
 n=0;
   while (c[n]!='\0')
      n++;
  cout<<c;
 deng(c,n);
}
