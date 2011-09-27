#include<stdio.h>
#include<malloc.h>
struct NODE
{
	int value;
	struct NODE*  next;
};
void create(int n,NODE* start) //参数依次是结点个数、头指针。 
    {
      int i;
      int x;
      NODE* q=start;
	  for(i=1;i<n;i++)
	  {
  		printf("请输入第%d个节点的值:",i);
  		scanf("%d",&x);
  		NODE* p=(NODE*)malloc(sizeof(NODE));
  		p->value=x;
  		q->next=p;
  		q=p;
  	  }	
  	  printf("请输入第%d个节点的值:",i);
  	  scanf("%d",&x);
  	  NODE* p=(NODE*)malloc(sizeof(NODE));
  	  p->value=x;
  	  q->next=p;
  	  p->next=NULL;
  	  printf("数据录入完成\n");
    }
void read(NODE* start) //参数是头指针。 
{
	NODE* p=start->next;
	printf("节点的值依次是：");
	while(p!=NULL)
	{
		printf("%d ",p->value);
		p=p->next;
	}
}
void del(int i,NODE* start) //参数依次是第几个节点、头指针。 
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
void dig(int i,int x,NODE* start) //参数依次是插入位置，插入节点的值、头指针。 
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