#include<stdio.h>
#include<stdlib.h>

#define OVERFLOW -2
#define OK 1
#define ERROR 0
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef int ElemType;
typedef int Status;

typedef struct//定义了结构顺序表
{
   ElemType *elem;
   int length;
   int listsize;
}SqList;

Status InitList_Sq(SqList &L)//初始化线性表
{
  L.elem=(ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
  if(!L.elem)
	  exit(ERROR);
  L.length=0;
  L.listsize=LIST_INIT_SIZE;
  return OK;
}

void CreateList(SqList &L,int len)
{
  if(len>LIST_INIT_SIZE)
  {
	  L.elem=(ElemType *)realloc(L.elem,len*sizeof(ElemType));
	  L.listsize=len;
  }
  printf("输入顺序表元素：\n");
  for(int i=0;i<len;i++)
  {
	  scanf("%d",&L.elem[i]);
  }
  L.length=len;
  printf("建立的顺序表为：\n");
  for(int i=0;i<len;i++) 
	  printf("%d\t",L.elem[i]);
  printf("\n顺序表的一共%d个元素\n",L.length);
}


int main()
{
  SqList L;
  int Sqlen;
  if(!InitList_Sq(L))
  {
	  printf("初始化失败！");
			  exit(ERROR);
  }

  printf("输入元素的个数是：");
  scanf("%d",&Sqlen);
  CreateList(L,Sqlen);
  system("pause");
  return ERROR;
}
