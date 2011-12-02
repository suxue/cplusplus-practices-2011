#include<stdio.h>
#include<stdlib.h>

#define OVERFLOW -2
#define OK 1
#define ERROR 0
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef int ElemType;
typedef int Status;

typedef struct//�����˽ṹ˳���
{
   ElemType *elem;
   int length;
   int listsize;
}SqList;

Status InitList_Sq(SqList &L)//��ʼ�����Ա�
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
  printf("����˳���Ԫ�أ�\n");
  for(int i=0;i<len;i++)
  {
	  scanf("%d",&L.elem[i]);
  }
  L.length=len;
  printf("������˳���Ϊ��\n");
  for(int i=0;i<len;i++) 
	  printf("%d\t",L.elem[i]);
  printf("\n˳����һ��%d��Ԫ��\n",L.length);
}


int main()
{
  SqList L;
  int Sqlen;
  if(!InitList_Sq(L))
  {
	  printf("��ʼ��ʧ�ܣ�");
			  exit(ERROR);
  }

  printf("����Ԫ�صĸ����ǣ�");
  scanf("%d",&Sqlen);
  CreateList(L,Sqlen);
  system("pause");
  return ERROR;
}
