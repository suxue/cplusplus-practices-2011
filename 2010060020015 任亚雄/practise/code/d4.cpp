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

//初始化线性表
Status InitList_Sq(SqList &L)
{
         L.elem=(ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
        // L.elem = new int[100];
         if(!L.elem)
         exit(ERROR);
         L.elem=0;
         printf("%d",L.elem);
         L.listsize=LIST_INIT_SIZE;
         printf("%d",L.listsize);
         return OK;                      
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


//返回指定的位置元素
ElemType GetElem(SqList &L,int i)
{
  ElemType *e;
  if(!L.elem||i>L.length||i<1)
  exit(ERROR);
  e=L.elem+i-1;
  return *e;                        
} 

//定位指定元素，如果有返回第一个匹配的元素的位置
int LocateElem(SqList &L,ElemType e)
{
     int i;
     if(!L.elem)
     exit(ERROR);
     for(i=0;i<L.length;i++)
     {
       if(e==L.elem[i])
       return i+1;                       
     }
     return 0;
} 


int main()
{
   SqList L;
   int location,element;
   if(!InitList_Sq(L))
   {
     printf("error");
     exit(ERROR);                                      
   }             
   Create_SqList(L);
   printf("输入你想找的位置：\n");
   scanf("%d",&location);
   while(location>L.length||location<1)
   {
      printf("重新输入！");
      scanf("%d",&location);                                    
   }                        
   printf("第%d个元素是：%d\n",location,GetElem(L,location));
   printf("输入查找的元素：");
   scanf("%d",&element);
   if(!LocateElem(L,element))
     printf("该顺序表中没有%d元素\n",element);
     else 
     printf("%d在顺序表中是第%d个元素",element,LocateElem(L,element));
     system("pause");
     return 0;       
}
