bool isprime(int k)
{
  if(k==1) return 0;
  if(k==2||k==3||k==5) return 1;
  if(k%2==0) return 0;
  
  for(int i=3;i*i<=k;i+=2)
    if(k%i==0) return 0;     
  return 1;     
}
