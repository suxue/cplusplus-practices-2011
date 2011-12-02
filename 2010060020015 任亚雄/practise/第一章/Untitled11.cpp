#include<stdio.h>
#include<conio.h>
int main()
{
  int x[][3]={10,20,30,40,50};
  int i,j;
  
  printf("x=%p\t",x);
  
  printf("&x[0][0]=%p\t",&x[0][0]);
  
  printf("x[0]=%p\n",x[0]);
  
  
  printf("x+1=%p\t",x+1);
  printf("x[1]=%p\t",x[1]);
  printf("&x[0][0]+1=%p\t",&x[0][0]+1);
  printf("x[0]+1=%p\n",x[0]+1);
  getch();
  return 0;
                        
}
