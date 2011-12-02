#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define OVERFLOW -2
#define OK 1
#define ERROR 0
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
using namespace std;
typedef int ElemType;
typedef int Status;

//定义顺序表的存储结构 
typedef struct
{
   ElemType *elem;
   int length;
   int listsize;                       
}SqList;

//初始化线性表
Status InitList_Sq(SqList &L)
{
  L.elem=(ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
  if(!L.elem)
  exit(0);
  L.length=0;
  L.listsize=LIST_INIT_SIZE;
  return 1;                         
} 
//自定义创建顺序表
void Create_SqList(SqList &L)
{
   int c,i=0;
   int *newBase;
   printf("请输入顺序表元素，按ctrl+z结束；\n");//按ctrl+z组合键输入结束 
   while(scanf("%d",&c)!=EOF)    
   {
      if(i>=L.listsize)
      {
        newBase=(ElemType *)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));//为初始化顺序表增加空间
        if(!newBase)
        exit(OVERFLOW);
        L.elem=newBase;
        L.listsize+=LISTINCREMENT;                          
      }                           
      L.elem[i++]=c;   
   }                
L.length=i;
printf("输入的顺序的元素是：\n");
for(i=0;i<L.length;i++)
   printf("%d",L.elem[i]);
   printf("\n");                       
} 


//在指定的位置插入元素
Status ListInsert(SqList &L,int i,ElemType e)
{
   ElemType *p,*q,*newbase;
   if(i<1||i>L.length+1)
   {
                           printf("插入的位置错误！");
                           return(ERROR); 
   }                         
   if(L.length>=L.listsize)
   {
      newbase=(ElemType*)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));
      if(!newbase)
      exit(OVERFLOW);
      L.elem=newbase;
      L.listsize+=LISTINCREMENT;                        
   }
   if(i==L.length)
   L.elem[i+1]=e;
  q=&(L.elem[i-1]);
   for(p=&(L.elem[L.length-1]);p>=q;--p)
   *(p+1)=*p;
   *q=e;
   ++L.length;
   return OK;
   
} 

int main()
{
   SqList L;
   int location,element;
  if(!InitList_Sq(L))
   {
      printf("tmd初始化失败！");
      exit(ERROR);                                            
   }             
   Create_SqList(L);
   printf("输入插入的位置：");
   scanf("%d",&location);
   while(location>L.length+1||location<1)
   {
      printf("输入的位置错误，请从新输入！\n");
      scanf("%d",&location);                                      
   }             
   printf("你插入的元素是：");
   scanf("%d",&element);
   if(!ListInsert(L,location,element))
   {
      printf("插入失败！");
      exit(ERROR);                                   
   }
   for(int i=0;i<L.length;i++)
   printf("%d",L.elem[i]);
   printf("\n新的元素表有%d个元素。\n",L.length);
   system("pause");
   return ERROR;                     
}
