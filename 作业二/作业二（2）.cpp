#include<iostream>
using namespace std;
int main()
{char a[100]
 int i,tag=1;
 gets(a);
for(i=0;tag==1&&i<100/2;i++)
   if(a[i]!=a[l00-1-i]) tag=0;
 if(tag==1) printf("是回路\n");
  else   printf("不是回路\n");
}
