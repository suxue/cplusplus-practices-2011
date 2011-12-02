#include<stdio.h>
#include<stdlib.h>

#define  Status  int
#define  success 1
#define   fatal  0
#define ElemType int
typedef struct 
{
  ElemType *elem;
  int length;
  int listsize;                      
}List,*Listptr;


List create_list(List la)//分配内存 
{         
  la.elem=(int *)malloc(11);
  la.length=11;
  return la;                                       
} 
//初始化
Status input_list(List la)
{
   printf("input your number!\n");
   for(int i=1;i<=10;i++)
   scanf("%d",&la.elem[i]);
   return success;                       
} 
/*Status List_Retrieve(List la,int pos,ElemType *a)
{
  if(pos>=1&&pos<=10)
  {
  *a=la.elem[pos];
   return success;
  }
  else 
  return fatal;
                            
}
Status List_Retrieve(ListPtr L,int pos,ElemType *elem)
{
  Status status=range_error;
  int len=L->length;
  if(1<=pos&&pos<=len)
  {
    *elem=L->elem[pos];
    status=success;                          
  }
  else status=fatal;                
  return status;             
}*/

Status location_list(List la,ElemType elem,int *p)
{
  Status status=fatal;
  int len=la.length;
  for(int i=1;i<=10;i++)
  {
  if(elem==la.elem[i])
  {
  *p=i;
  status=success;
  break;  
  }
  }             
  printf("%d",status);   
  return status;          
}
int main()
{
  List lb;
  lb=create_list(lb);
  input_list(lb);
  /*printf("%d",lb.elem[3]);
  ElemType *b;
  int *k;
  k=List_Retrieve(lb,3,b);
  if(k!=0)
  printf("you want to find is %d\n",*b);*/
  int *p;
  if(location_list(lb,4,p))
  //printf("1223");
  printf("%d",*p);
   system("pause");
   return 0;                            
}
