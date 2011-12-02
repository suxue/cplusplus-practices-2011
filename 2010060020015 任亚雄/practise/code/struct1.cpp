#include<stdio.h>
#include<stdlib.h>


#define MAXSIZE 10
typedef int ElemType;
typedef struct Sqlist
{
  ElemType elem[MAXSIZE+1];  
  int length;                    
}Sq,*ptrSq;

/*int main()
{
  Sq sqlist;
  ptrSq q;
  q=&sqlist;
  for(int i=1;i<=MAXSIZE;i++)
    scanf("%d",&q->elem[i]);
    
  for(int i=1;i<MAXSIZE+1;i++)
  printf("%d\t",sqlist.elem[i]);
  
  system("pause");
  return 0;                                 
}*/

ptrSq create_list(Sq sq)
{
  printf("用数组初始化\n");
 // Sq sq;
  ptrSq q;
  q=&sq;
  for(int i=1;i<=MAXSIZE;i++)
  scanf("%d",&sq.elem[i]);  
  return q;                      
}

void print(ptrSq La)
{
  for(int i=1;i<=MAXSIZE;i++)
  printf("%d",La->elem[i]);                                 
}

int main()
{
  Sq qList;
  ptrSq p;
  p=create_list(qList);
  print(p);
  system("pause");
  return 0;                                                           
}
