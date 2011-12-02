void PreInOrd(char preord[],char inord[],int i,int j,int k,int h,BiTree *t)
{
 int m;
 (*t)=new BiNode;
 (*t)->data=preord[i];
 m=k;
 while(inord[m]!=preord[i])
 m++;
 if(m==k)
 (*t)->lchild=NULL;
 else PreInOrd(preord,inord,i+1,i+m-k,k,m-1,&(*t)->lchild);
 if(m==h)
 (*t)->rchild=NULL;
 else PreInOrd(preord,inord,i+m-k+1,j,m+1,h,&(*t)->lchild);
}
