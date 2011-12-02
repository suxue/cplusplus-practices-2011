#include<stdlib.h>
#include<stdio.h>

#define OVERFLOW -2
#define OK 1
#define ERROR 0
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef int ElemType;
typedef int Status;

typedef struct 
{
  ElemType *elem;
  int length;
  int listsize;                      
}SqList;

Status InitList_Sq(SqList &L)
{
   L.elem=(ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
   if(!L.elem)
   {
      printf("初始化失败！");
      exit(ERROR);                                                           
   }
   L.length=0;
   L.listsize=LIST_INIT_SIZE;
}


void Create_SqList(SqList &L)
{
   int i=0,c,*newbase;
     printf("输入你的元素：\n");
     while((scanf("%d",&c))!=EOF) 
     {
        if(i>LIST_INIT_SIZE)
        {
          newbase=(ElemType *)realloc(L.elem,(LIST_INIT_SIZE+LISTINCREMENT)*sizeof(ElemType));
          if(!newbase)
          exit(ERROR);
          L.elem=newbase;
          L.listsize+=LISTINCREMENT;                            
        }                           
        L.elem[i++]=c;    
     }                 

    L.length=i;
   printf("你输入的数字是：\n");
   for(int i=0;i<L.length;i++)
      printf("%d\t",L.elem[i]);
   printf("\n"); 
}
//删除指定的元素
/*Status ListDete(SqList &L,int i)
{
    ElemType *q,*p;
    if(i<1||i>L.length+1)
    exit(ERROR);
   // e=&(L.elem[i-1]);
    p=&(L.elem[i]); 
    printf("%d",L.elem[i]);
    q=L.elem+L.length-1;
           for(p+1;p<=q;++p)
           *p=*(p+1);
  --L.length;
  return OK;  
} */

Status ListDete(SqList &L,ElemType *e)
{
     int i;
    for(i=0;i<L.length;i++)
 {
    if(*e==L.elem[i])
    break;
  } 
  if(i>=L.length)
  {
  printf("no found!");
   exit(ERROR);
  }    
  int *p,*q;
  p=&(L.elem[i]);
  q=L.elem+L.length-1;
  for(;p<=q;p++)
  *p=*(p+1);
  --L.length;
  return OK;
}


int main()
{
   SqList L;
   int location,element;
   if(!InitList_Sq(L))
    {
      printf("顺序表初始化失败！");
      exit(ERROR); 
   }              
  Create_SqList(L);
  //printf("输入你想删除的位置：");
 // scanf("%d",&location);
 printf("输入你想删除的元素：");
  scanf("%d",&element);
  ListDete(L,&element);
  //printf("%dasfd",L.elem[1]);
  for(int i=0;i<L.length;i++)
  printf("%d\t",L.elem[i]);
  system("pause");
  return 0;                           
 }
