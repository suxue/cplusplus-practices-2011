#include<stdio.h>
#include<stdlib.h>

#define overflow 2
#define error 0

typedef int ElemType;
typedef int Status ;
typedef struct 
{
  ElemType *elem;
  int length;
  int listsize;                      
}Sqlist,*ptrSqlist;
//分配内存
ptrSqlist create_list(ptrSqlist la,int longth)
{
  la->elem=(ElemType *)malloc(longth);
  la->listsize=longth;
  la->length=0;
  return la;                   
}
//输入元素
ptrSqlist input(ptrSqlist la,int n)
{
   int i;
  la->length=n;
  //if(n>la->listsize)
  //la->elem=(ElemType *)realloc(la->elem,n);
  for(i=1;i<=n;i++)
  scanf("%d",&(la->elem[i]));
 for(i=1;i<=n;i++)
  printf("qwe%d\t",la->elem[i]);
  return la;                        
} 
Status list_Insert(ptrSqlist la,int pos,ElemType elem)
{
  Status status=0;
  printf("hehhe");
   if(pos<1||pos>la->listsize) 
    printf("input error!");
    else if(pos>=1&&pos<=la->listsize)
    {                                
     if(la->length==la->listsize)
     la->elem=(ElemType *)realloc(la->elem,(la->listsize+10));
     la->length+=1;
     for(int i=la->length;i>pos;i--)
     {
       la->elem[i]=la->elem[i-1];                                  
     }
     la->elem[pos]=elem;
     status=1;       
    }           
    return status;
} 

int main()
{
  Sqlist lb;
  ptrSqlist p;
  p=&lb;
  p=create_list(p,10);
  printf("heh");
  p=input(p,10);
  //printf("heihei");
  //list_Insert(p,3,3);
  printf("%d",p->length);
   for(int i=1;i<=p->length;i++)
   printf("%d\t",p->elem[i]);
  //printf("qusi");
   system("pause");
   return 0;                            
}


