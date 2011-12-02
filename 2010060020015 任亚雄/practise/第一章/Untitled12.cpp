#include<stdio.h>
#include<stdlib.h>
int main()
{
  struct employee
  {
     char id[7];
     char name[20];
     int salary;                             
  };
  struct employee manager={"d12345","Peter",3500};
  printf("&manager=%p\n",&manager);
  printf("&manager.id=%p\n",manager.id);
  printf("&manager.name=%p\n",manager.name);
  printf("&manager.salary=%d\n",&manager.salary);
  printf("manager.id=%s\n",manager.id);
  printf("manager.name=%s\n",manager.name);
  printf("manager.salary=%d\n",manager.salary); 
   system("pause");
   return 0;                    
}
