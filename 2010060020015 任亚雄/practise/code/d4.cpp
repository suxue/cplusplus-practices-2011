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

//��ʼ�����Ա�
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


//����ָ����λ��Ԫ��
ElemType GetElem(SqList &L,int i)
{
  ElemType *e;
  if(!L.elem||i>L.length||i<1)
  exit(ERROR);
  e=L.elem+i-1;
  return *e;                        
} 

//��λָ��Ԫ�أ�����з��ص�һ��ƥ���Ԫ�ص�λ��
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
   printf("���������ҵ�λ�ã�\n");
   scanf("%d",&location);
   while(location>L.length||location<1)
   {
      printf("�������룡");
      scanf("%d",&location);                                    
   }                        
   printf("��%d��Ԫ���ǣ�%d\n",location,GetElem(L,location));
   printf("������ҵ�Ԫ�أ�");
   scanf("%d",&element);
   if(!LocateElem(L,element))
     printf("��˳�����û��%dԪ��\n",element);
     else 
     printf("%d��˳������ǵ�%d��Ԫ��",element,LocateElem(L,element));
     system("pause");
     return 0;       
}
