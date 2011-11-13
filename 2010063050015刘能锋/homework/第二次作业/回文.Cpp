#include<iostream>
using namespace std;
int main()
{ char a[100];
  int length,i,tag=1;
  gets(a);
  length=strlen(a); 
 for(i=0;tag==1&&i<length/2;i++)
   if(a[i]!=a[length-1-i]) tag=0;
 if(tag==1) printf("是回路\n");
  else   printf("不是回路\n");	
}
