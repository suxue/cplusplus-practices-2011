#include<stdio.h>
#include<conio.h>
int main()
{
  int x=100,y=200;
  int *ptr=&x;
  
  printf("����x�ĵ�ַ��%p\n",&x);
  printf("����y�ĵ�ַ��%p\n",&y);
  printf("ָ��ĵ�ַ��%p\n",&ptr);
  
  printf("����x��ֵ��%d\n",x);
  printf("����y��ֵ��%d\n",y);
  printf("ptr��������%p\n",ptr);
  printf("ptr��ֵ��%d\n",*ptr);
  getch();
  return 0;
   
                        
}
