#include<stdio.h>
#include<conio.h>
int main()
{
  double x,y,average;
  printf("请输入浮点数x与y：");
  scanf("%lf%lf",&x,&y);
  average=(x+y)/2;
  printf("x与y的平均数是：%lf",average);
  getch();
  return 0;                     
}
