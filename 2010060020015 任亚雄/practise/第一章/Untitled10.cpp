#include<stdio.h>
#include<conio.h>
int main()
{
  int x[2][3]={1,2,3,4,5,6};
  printf("%p\n",x+2);
  printf("%p\t",&x[2]);
  //printf("%p\t",&x[0]);
  //for(int i=0;i<2;i++)
  //for(int j=0;j<3;j++)
 // printf("%p\t",&x[i][j]);
  getch();
  return 0;                      
                      
}
