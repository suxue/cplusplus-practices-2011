#include<iostream>
#include<Cstring>
using namespace std;
int main()
{
  char *ch;
  int n=0,i;
  cin>>ch;
  n=strlen(ch);
  cout<<n;
  char temp[n];
  for(i=n;i>0;i--)
  {
   temp[n]='\0';
  temp[i-1]=ch[n-i];
   }
   /*for(int i=n;i>=0;i--)
   temp[n-i]=ch[n-1];*/
  if((strcmp(ch,temp))==0)
  cout<<"Yes!"<<endl;
  else 
  cout<<"No!"<<endl;
  system("pause");
  return 0;                      
}

