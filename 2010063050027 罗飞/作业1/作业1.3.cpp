/*
    计算邮资问题
*/
#include"stdio.h"
int main()
{
    int iweight=0,ipay=0,idest=0;
    scanf("%d %d",&iweight,&idest);
    switch(iweight/15+1){
    case 1: ipay=5;break;
    case 2: ipay=9;break;
    case 3: ipay=12;break;
    case 4: ipay=14+idest/1000;break;
    default : ipay=15+idest/1000;
    }
    printf("total money is %d\n",ipay);
    return 0;
}
