int GongYue(int a,int b)
{
  for(int i=a<b?a:b;i>=1;i--)     
    if(a%i==0&&b%i==0)  return i;      
}

int GongBei(int a,int b)
{
  for(int i=a>b?a:b; ;i++)
    if(i%a==0 && i%b==0)  return i;
}
