/*
    程序实现输入10个整数，升序输出，并且先输出奇数再输出偶数
*/
#include"stdio.h"
int main()
{
    int num[10];
    for (int i=0; i < 10; i++)
        scanf("%d",num+i);
    for(int i=0; i<9; i++)
        for(int j=i+1; j<=9; j++)
            if(num[i] > num[j]){
                int temp = num[j];
                num[j] = num[i];
                num[i] =temp;
            }
    for(int j=1;j>=0;j--)
        for(int i=0; i<10; i++) {
            if(j && num[i]%2 == 1) printf("%d ",num[i]);
            if(!j && num[i]%2 == 0) printf("%d ",num[i]);
        }
    return 0;
}
