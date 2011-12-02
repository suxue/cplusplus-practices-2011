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

//����˳���Ĵ洢�ṹ 
typedef struct
{
   ElemType *elem;
   int length;
   int listsize;                       
}SqList;

//��ʼ�����Ա�
Status InitList_Sq(SqList &L)
{
  L.elem=(ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
  if(!L.elem)
  exit(0);
  L.length=0;
  L.listsize=LIST_INIT_SIZE;
  return 1;                         
} 
//�Զ��崴��˳���
void Create_SqList(SqList &L)
{
   int c,i=0;
   int *newBase;
   printf("������˳���Ԫ�أ���ctrl+z������\n");//��ctrl+z��ϼ�������� 
   while(scanf("%d",&c)!=EOF)    
   {
      if(i>=L.listsize)
      {
        newBase=(ElemType *)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));//Ϊ��ʼ��˳������ӿռ�
        if(!newBase)
        exit(OVERFLOW);
        L.elem=newBase;
        L.listsize+=LISTINCREMENT;                          
      }                           
      L.elem[i++]=c;   
   }                
L.length=i;
printf("�����˳���Ԫ���ǣ�\n");
for(i=0;i<L.length;i++)
   printf("%d",L.elem[i]);
   printf("\n");                       
} 


//��ָ����λ�ò���Ԫ��
Status ListInsert(SqList &L,int i,ElemType e)
{
   ElemType *p,*q,*newbase;
   if(i<1||i>L.length+1)
   {
                           printf("�����λ�ô���");
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
      printf("tmd��ʼ��ʧ�ܣ�");
      exit(ERROR);                                            
   }             
   Create_SqList(L);
   printf("��������λ�ã�");
   scanf("%d",&location);
   while(location>L.length+1||location<1)
   {
      printf("�����λ�ô�����������룡\n");
      scanf("%d",&location);                                      
   }             
   printf("������Ԫ���ǣ�");
   scanf("%d",&element);
   if(!ListInsert(L,location,element))
   {
      printf("����ʧ�ܣ�");
      exit(ERROR);                                   
   }
   for(int i=0;i<L.length;i++)
   printf("%d",L.elem[i]);
   printf("\n�µ�Ԫ�ر���%d��Ԫ�ء�\n",L.length);
   system("pause");
   return ERROR;                     
}
