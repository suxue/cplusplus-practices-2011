void BinSearch()
{
  int R[MAXLED],i,k,low,mid,high,m,nn;
  char ch;
  printf("建立递增有序的查找顺序表（以回车间隔，以-1结束）：\n");
  for(i=0;i<MAXLED;i++)
  {
    scanf("%d",&R[i]);
    if(R[i]==-1)
    {
     nn=i;
     break;                                                            
   }                                                       
  }
  
  printf("请输入要查找的数据：");
  scanf("%d",&k);
  low=0;high=nn-1;m=0;
  while(low<=high)
  {
    mid=(low+high)/2;
    m++;
    if(R[mid]>k)
    high=mid-1;
    else
    if(R[mid]<k)
    low=mid+1;
    else 
    break;                               
  }       
  
  if(low>high)
  {
   printf("没有找到\n");
   printf("共进行了%d次比较",m);
   if(R[mid]<k)
   mid++;
   printf("可将次数插入到%d的位置上。\n",k,mid+1);                                       
  }
  else
  {
   printf("要找的数据是%d在第%d的位置上"，k,mid+1);
   printf("一共进行了%d次比较"，m);                                                                                       
  }
}
