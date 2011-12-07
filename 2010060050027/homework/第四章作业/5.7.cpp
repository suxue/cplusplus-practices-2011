int f(int x,int y)
{
  int ans=1;
  for(int i=1;i<=y;i++)
    ans*=x;
  return ans;
}
