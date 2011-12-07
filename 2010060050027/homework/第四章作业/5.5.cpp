int C(int n,int m)
{
  int ans=1;
  for(int i=1;i<=m;i++)  ans*=i;
  for(int i=1;i<=n;i++)  ans/=i;
  for(int i=1;i<=m-n;i++)  ans/=i;
  return ans;
    
    
}
