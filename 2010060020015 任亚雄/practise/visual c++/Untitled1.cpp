typedef struct BiTreeNode
{
  DataType data;
  struct BiTreeNode *lchild,*rchild;                         
}BiTreeNOde,*BiTree;//����һ�ֶ�����ʽ


typedef struct BiTreeNode
{
  Datatype data;
  struct BiTreeNode *lchild,*rchild,*parent;                         
} BiTreeNode,*BiTree;//the  second defination


void PreOrder(BiTree bt)
{
  if(bt!=NULL)
  {
  visit(bt->data);
  PreOrder(bt->lchild);
  PreOrder(bt->rchild);
  }                        
}//����������������õݹ���㷨

void InOrder(BiTree bt)
{
  if(bt!=NULL)
  {
    InOrder(bt->lchild);
    visit(bt->data);
    InOrder(bt->rchild);                            
  }                       
} //�����������������


void PostOrder(BiTree bt)
{
  if(bt!=NULL)
  {
    PostOrder(bt->lchild);
    PostOrder(bt->rchild);
    visit(bt->data);                       
  }                      
} //�������


//��α���try

void LeveOrder(BiTree bt)//�ǵݹ�Ĳ�α��� 
{
  BiTreeNode Queue[MAXNODE];
  int front,rear;
  if(bt==NULL)
  return ;
  front=-1;
  rear=0;
  Queue[rear]=bt;
  while(rear!=front)
  {
   front++;
   visit(Queue[front]->data);
   if(Queue[front]!=NULL)
   {
     rear++;
     Queue[rear]=Queue[front]->lchild;                          
   }                          
   if(Queue[front]->rchild!=NULL)
   {
     rear++;
     Queue[rear]=Queue[front]->rchild;                              
   }
  }                      
}


void NROrder(BiTree bt)
{
  BiTreeNode Queue[MAXNODE];
  if(bt==NULL)
  return ;
  int front,rear;
  front=-1,rear=0;
  Queue[rear]=bt;
  while(front!=rear)
  {
    front++;
    visit(Queue[front]->data);
    if(Queue[front]->lchild!=NULL)
    {
          Queue[++rear]=Queue[front]->lchild;                     
    }               
    if(Queue[front]->rchild!=NULL)
    {
     rear++;
     Queue[rear]=Queue[front]->rchild;                              
    }           
  }                       
}


void NRInOrder(BiTree bt)
{
  BiTree S[MAXNODE],p=bt;
  int top=-1;
  if(bt!=NULL)
  return ;
  while(!=(p==NULL&&top==0))
  {
    while(p!=NULL)
    {
     if(top<MAXNODE-1)
     S[top++]=p;
     else
     {
       printf("ջ���\n");
       return;                       
     }        
     p=p->lchild;                
    }
    if(top==-1)return ;
    else
    {
     p=S[--top];
     visit(p->data);
     p=p->rchild;                             
    }       
  }                      
}



void NROrder(BiTree bt)
{
  BiTree S[MAXNODE],p=bt;
  int top=-1;
  if(bt==NULL)
  return ;
  while(p!=NULL&&top!=0)
  {
   while(p!=NULL)
   {
     if(top<MAXNODE-1)
     S[top++]=p;
     else
     {
     printf("ջ�����\n");
     return ;                                           
     }
     p=p->lchild;                      
   } 
   if(top==-1)
   return ;
   else
   {
     p=S[--top];
     visit(p->data);
     p=p->rchild;                                    
   }          
  }                       
}


/*����˼���� ��
   �Ӹ��������࿪ʼ���������������޷�������ʱ���ڷ��أ����������ʱ�������������������ڽ�������ͷ��أ�
   ֱ�����Ӹ��ڵ�����������ص������Ϊֹ�����������������ʱ���������ͷ��ʣ������Ǵ�����������ʱ��������
   ���ʣ������Ǵ�����������ʱ�������ͷ��� */ 
   
   
void NROrder(BiTree bt)
{
  BiTree S[MAXNODE],p=bt;
  int top=-1;
  if(bt==NULL)
  return ;
  while(!(p==NULL&&top==0))
  {
   while(p!=NULL)
   {
     if(top<MAXNODE-1)
     S[top++]=p;
     else
     {
      printf("ջ���/n");
      return ;                      
     }  
   }      
     if(top==-1)
     return;
     else
     {
      p=S[--top];
      visit(p->data);
      p=p->rchild;                               
     }                
   }                                             
}
   
   
   
