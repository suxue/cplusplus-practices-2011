void BinSearch()
{
  int R[MAXLED],i,k,low,mid,high,m,nn;
  char ch;
  printf("������������Ĳ���˳����Իس��������-1��������\n");
  for(i=0;i<MAXLED;i++)
  {
    scanf("%d",&R[i]);
    if(R[i]==-1)
    {
     nn=i;
     break;                                                            
   }                                                       
  }
  
  printf("������Ҫ���ҵ����ݣ�");
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
   printf("û���ҵ�\n");
   printf("��������%d�αȽ�",m);
   if(R[mid]<k)
   mid++;
   printf("�ɽ��������뵽%d��λ���ϡ�\n",k,mid+1);                                       
  }
  else
  {
   printf("Ҫ�ҵ�������%d�ڵ�%d��λ����"��k,mid+1);
   printf("һ��������%d�αȽ�"��m);                                                                                       
  }
}
