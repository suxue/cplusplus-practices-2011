typedef struct BiTreeNode
{
  DataType data;
  struct BiTreeNode *lchild,*rchild;                         
}BiTreeNOde,*BiTree;//结点的一种定义形式


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
}//二叉树的先序遍历用递归的算法

void InOrder(BiTree bt)
{
  if(bt!=NULL)
  {
    InOrder(bt->lchild);
    visit(bt->data);
    InOrder(bt->rchild);                            
  }                       
} //二叉树的中序遍历法


void PostOrder(BiTree bt)
{
  if(bt!=NULL)
  {
    PostOrder(bt->lchild);
    PostOrder(bt->rchild);
    visit(bt->data);                       
  }                      
} //后序遍历


//层次遍历try

void LeveOrder(BiTree bt)//非递归的层次遍历 
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
       printf("栈溢出\n");
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
     printf("栈溢出！\n");
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


/*核心思想是 ：
   从根结点左外侧开始，到根结点最左端无法在深入时候在返回，进入刚深入时候遇到结点的右子数，在进行深入和返回，
   直到最后从根节点的右子数返回到根结点为止；先序遍历是在深入时候遇到结点就访问，中序是从左子数返回时遇到结点就
   访问，后序是从右子数返回时遇到结点就访问 */ 
   
   
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
      printf("栈溢出/n");
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
   
   
   
