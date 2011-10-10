#include<iostream>
#include<math.h>
using namespace std;

float switchf(float f);
double  findpi(int n);
int divisor(int x,int y);
void prime (int n);
long cnm(int n,int m);
int sum(int k);
double power(float x,int y);

int main()
{ 
  float f,c;
  cout<<"���뻪���¶ȣ�"<<endl;
  cin>>f;
  c=switchf(f);
  cout<<"�����¶ȣ�"<<c<<endl; 
  //
  int n;
  cout<<"�������������"<<endl;
  cin>>n;
  cout<<"pi=��"<<findpi(n)<<endl;   
  //
  int x,y,d,m;
  cout<<"�����һ������"<<endl;
  cin>>x;
  cout<<"����ڶ�������"<<endl;
  cin>>y;
  d=divisor(x,y);
  m=x*y/d;
  cout<<"������Լ������С��������"<<d<<'\t'<<m<<endl;
  //
  int num;
  cout<<"����һ������"<<endl;
  cin>>num;
  prime (num);    
  //
  int cn,cm;
  cout<<"����n��"<<endl;
  cin>>cn;
  cout<<"����m��"<<endl;
  cin>>cm;
  cout<<"�����������"<<cnm(cn,cm)<<endl;
  //
  
  cout<<"�����������"<<sum(99)<<endl;
  //
  float px;
  int py;
  cout<<"����px"<<endl;
  cin>>px;
  cout<<"����py"<<endl;
  cin>>py;
  cout<<"�����������"<< power(px,py)<<endl; 
  system("pause");
}

float switchf(float f)
{
  return (5*(f-32)/9);
}

double findpi(int n)
{
   double i;
   double pi=0;
   for(i=1;i<=n;i+=2)
   {
   	pi+=((double)(1/(2*i-1))-(double)(1/(2*i+1))) ;
   }
   return (4*pi);
}

int divisor(int x,int y)
{
	while (x&&y)
	{   
        int i=x%y;
		while (i)
		{
			x=y;
			y=i;
			i=x%y;
		}
		return y;
	}
}

void prime (int n)
{
	int p=1,i=2;
	for(;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
		   p=0;
		   break; 
		}
	}
	if(p==1)
	   cout<<"������"<<endl;
	else
	   cout<<"��������"<<endl; 
}

long cnm(int n,int m)
{
	int i;
	long cnm1=n,cnm2=m;
	for(i=n;i>n-m+1;i--)
	{
		cnm1=cnm1*(i-1);
		cnm2=cnm2*(m-n+i-1);
	}
	return cnm1/cnm2;
}

int sum(int k)
{
	if(k==1)
	{
		return 1;
	}
	else
	{
	   return(k+sum(k-2));
	}

}

double power(float x,int y)
{
	if(y==0) 
	{
	   return 1;	
	}
    if(x&&y)
	{
	  if(y==1)
		 {
			 return x;
		 }
	  else
		 {
		 	 return x*power(x,y-1);
		 }
	}
    else if(x==0)
	{
	  return 0;
	}
	
	system("pause");
}
