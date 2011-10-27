#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  int weight,dist,cost;
  while(scanf("%d %d",&weight,&dist)==2)
  {
  
    if(weight<=15) cost=5;
    else if(weight>15&&weight<=30) cost=9;
    else if(weight>30&&weight<=45) cost=12;
    else if(weight>45&&weight<=60) cost=14+dist/1000;
    else if(weight>60) cost=15+dist/1000;
    
    cout<<"你所需要的邮资为"<<cost<<endl;    
  }
  return 0;
}
