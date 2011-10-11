#include<iostream>
#include<math.h>
using namespace std;

float switchf(float f);  //�¶�ת�� ���� 
double  findpi(int n);   //��Բ���� ���� 
int divisor(int x,int y);  // ���Լ�� ���� 
void prime (int n);      //�ж�����  ���� 
long cnm(int n,int m);   //��Cnm  ���� 
int sum(int k);           //���   ���� 
double power(float x,int y);  // x��y���� ���� 

int main()
{ 
  //  �¶�ת�� 
  float f,c;
  cout<<"���뻪���¶ȣ�"<<endl;
  cin>>f;
  c=switchf(f);
  cout<<"�����¶ȣ�"<<c<<endl; 
  //  ��pi 
  int n;
  cout<<"�������������"<<endl;
  cin>>n;
  cout<<"pi=��"<<findpi(n)<<endl;   
  //  �����Լ������󹫱��� 
  int x,y,d,m;
  cout<<"�����һ������"<<endl;
  cin>>x;
  cout<<"����ڶ�������"<<endl;
  cin>>y;
  d=divisor(x,y);
  m=x*y/d;
  cout<<"������Լ������С��������"<<d<<'\t'<<m<<endl;
  //   �ж����� 
  int num;
  cout<<"����һ������"<<endl;
  cin>>num;
  prime (num);    
  //  ��Cnm 
  int cn,cm;
  cout<<"����n��"<<endl;
  cin>>cn;
  cout<<"����m��"<<endl;
  cin>>cm;
  cout<<"�����������"<<cnm(cn,cm)<<endl;
  //  ��� 
  
  cout<<"�����������"<<sum(99)<<endl;
  //  ��x��y���� 
  float px;
  int py;
  cout<<"����px"<<endl;
  cin>>px;
  cout<<"����py"<<endl;
  cin>>py;
  cout<<"�����������"<< power(px,py)<<endl; 
  system("pause");
}

float switchf(float f)  //�¶�ת�������Ķ��� 
{
  return (5*(f-32)/9);
}

double findpi(int n)    //��pi�������� ���������k+1��/2 
{
   double i;
   double pi=0;
   for(i=1;i<=n;i+=2)
   {
   	pi+=((double)(1/(2*i-1))-(double)(1/(2*i+1))) ;
   }
   return (4*pi);
}

int divisor(int x,int y)//��x��y�����Լ�� 
{
	while (x&&y)   //շת����� 
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

void prime (int n)//�ж������������� 
{
	int p=1,i=2;
	for(;i<sqrt(n);i++)  //������2��n^(1/2) 
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

long cnm(int n,int m)//��Cnm�������� 
{
	if(m>n)
	{
		 cout<<"����"<<endl;
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

int sum(int k)  //1��k��һ������ͺ������� 
{
	if(k<=1)
	{
		return k;
	}
	else
	{
	   return(k+sum(k-2));//�ݹ���� 
	}

}

double power(float x,int y)  //��x��y���ݺ������� 
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
		 	 return x*power(x,y-1); //�ݹ���� 
		 }
	}
    else if(x==0)
	{
	  return 0;
	}
	
	system("pause");
}
