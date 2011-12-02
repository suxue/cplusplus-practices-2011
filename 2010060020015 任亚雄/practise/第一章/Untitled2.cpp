#include<stdio.h>
#include<stdlib.h>
int main()
{
  float x,y,average;
  printf("请输入浮点数x与y：");
  scanf("%f",&x);
  printf("%f",x);
  scanf("%f",&y);
  average=(x+y)/2;
  printf("结果为%f",average);              
  system("pause");
  return 0;                    
} 
