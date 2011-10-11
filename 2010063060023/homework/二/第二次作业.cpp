#include<iostream>
#include<math.h>
using namespace std;

float switchf(float f);  //温度转换 声明 
double  findpi(int n);   //求圆周率 声明 
int divisor(int x,int y);  // 最大公约数 声明 
void prime (int n);      //判断素数  声明 
long cnm(int n,int m);   //求Cnm  声明 
int sum(int k);           //求和   声明 
double power(float x,int y);  // x的y次幂 声明 

int main()
{ 
  //  温度转换 
  float f,c;
  cout<<"输入华氏温度："<<endl;
  cin>>f;
  c=switchf(f);
  cout<<"摄氏温度："<<c<<endl; 
  //  求pi 
  int n;
  cout<<"输入运算次数："<<endl;
  cin>>n;
  cout<<"pi=："<<findpi(n)<<endl;   
  //  求最大公约数和最大公倍数 
  int x,y,d,m;
  cout<<"输入第一个数："<<endl;
  cin>>x;
  cout<<"输入第二个数："<<endl;
  cin>>y;
  d=divisor(x,y);
  m=x*y/d;
  cout<<"输出最大公约数和最小公倍数："<<d<<'\t'<<m<<endl;
  //   判断素数 
  int num;
  cout<<"输入一个数："<<endl;
  cin>>num;
  prime (num);    
  //  求Cnm 
  int cn,cm;
  cout<<"输入n："<<endl;
  cin>>cn;
  cout<<"输入m："<<endl;
  cin>>cm;
  cout<<"输出计算结果："<<cnm(cn,cm)<<endl;
  //  求和 
  
  cout<<"输出计算结果："<<sum(99)<<endl;
  //  求x的y次幂 
  float px;
  int py;
  cout<<"输入px"<<endl;
  cin>>px;
  cout<<"输入py"<<endl;
  cin>>py;
  cout<<"输出计算结果："<< power(px,py)<<endl; 
  system("pause");
}

float switchf(float f)  //温度转换函数的定义 
{
  return (5*(f-32)/9);
}

double findpi(int n)    //求pi函数定义 运算次数（k+1）/2 
{
   double i;
   double pi=0;
   for(i=1;i<=n;i+=2)
   {
   	pi+=((double)(1/(2*i-1))-(double)(1/(2*i+1))) ;
   }
   return (4*pi);
}

int divisor(int x,int y)//求x，y的最大公约数 
{
	while (x&&y)   //辗转相除法 
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

void prime (int n)//判断素数函数定义 
{
	int p=1,i=2;
	for(;i<sqrt(n);i++)  //遍历从2到n^(1/2) 
	{
		if(n%i==0)
		{
		   p=0;
		   break; 
		}
	}
	if(p==1)
	   cout<<"是素数"<<endl;
	else
	   cout<<"不是素数"<<endl; 
}

long cnm(int n,int m)//求Cnm函数定义 
{
	if(m>n)
	{
		 cout<<"错误！"<<endl;
	}
	else
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
}

int sum(int k)  //1到k隔一个数求和函数定义 
{
	if(k<=1)
	{
		return k;
	}
	else
	{
	   return(k+sum(k-2));//递归调用 
	}

}

double power(float x,int y)  //求x的y次幂函数定义 
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
		 	 return x*power(x,y-1); //递归调用 
		 }
	}
    else if(x==0)
	{
	  return 0;
	}
	
	system("pause");
}
