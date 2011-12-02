#include<stdio.h>
#include<conio.h>
int main()
{
  struct employee
  {
    char id[7];
    char name[20];
    long int salary;                                          
  };
  struct employee manager={"d1234","renyaxi",100000};
  
  //printf("&employee=%p\n",&employee);
  printf("&manager=%p\n",&manager);
  printf("manager.id=%p\n",manager.id);
  printf("manager.name=%p\n",manager.name);
  printf("&manager.salary=%d\n",&manager.salary); 
   //printf("%p",employee.name);
   printf("manager.id=%s\n",manager.id);
   printf("manager.name=%s\n",manager.name);
   printf("manager.salary=%d",manager.salary);
   getch();
   return 0;                      
}
