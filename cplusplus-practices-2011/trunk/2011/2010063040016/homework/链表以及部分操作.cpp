#include<stdio.h>
#include<malloc.h>
struct NODE
{
	int value;
	struct NODE*  next;
};
void create(int n,NODE* start) //���������ǽ�������ͷָ�롣 
    {
      int i;
      int x;
      NODE* q=start;
	  for(i=1;i<n;i++)
	  {
  		printf("�������%d���ڵ��ֵ:",i);
  		scanf("%d",&x);
  		NODE* p=(NODE*)malloc(sizeof(NODE));
  		p->value=x;
  		q->next=p;
  		q=p;
  	  }	
  	  printf("�������%d���ڵ��ֵ:",i);
  	  scanf("%d",&x);
  	  NODE* p=(NODE*)malloc(sizeof(NODE));
  	  p->value=x;
  	  q->next=p;
  	  p->next=NULL;
  	  printf("����¼�����\n");
    }
void read(NODE* start) //������ͷָ�롣 
{
	NODE* p=start->next;
	printf("�ڵ��ֵ�����ǣ�");
	while(p!=NULL)
	{
		printf("%d ",p->value);
		p=p->next;
	}
}
void del(int i,NODE* start) //���������ǵڼ����ڵ㡢ͷָ�롣 
{
	NODE* p=start;
	for(int k=1;k<i;k++)
	{
		p=p->next;
	}
	NODE* q=p->next;
	p->next=q->next;
	free(q);
}
void dig(int i,int x,NODE* start) //���������ǲ���λ�ã�����ڵ��ֵ��ͷָ�롣 
{
	NODE* p=start;
	for(int k=1;k<i;k++)
	{
		p=p->next;
	}
	NODE* q=(NODE*)malloc(sizeof(NODE));
	q->next=p->next;
	q->value=x;
	p->next=q;
	
}
main()
{
    NODE *L=(NODE*)malloc(sizeof(NODE));
    create(8,L);
    del(3,L);
    dig(3,3,L);
    read(L);
}