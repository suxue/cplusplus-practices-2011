//���������� 
#include<iostream>
using namespace std;
class Set
{
	private:
	  int top;
	  int *p;
	  int max;
    public:
      Set(){top=0;max=100;}
      Set(int max)
  	  {
  	  	this->max=max;
	    top=0;
	    p=new int[max];
	  }
      int inElem(int element)//�ж�Ҫ���������������� 
      {
      	for(int i=0;i<top;i++)
      	{
	      	if(p[i]==element)
				return 1;
		    return 0;
        }
      }
      Set add(int element)//�������Ԫ�� 
      {
      	if(!inElem(element)&&top<max-1)
      	{
		  *(p+top)=element;
      	  top++;
	    }
      	return *this;
      }
      int isEmpty()//�ж�Ϊ�� 
  	  {
      	if (top==0)
      	  return 1;
  	    else return 0;
      }
      int GetTop()//��ö��˻�Ԫ����Ŀ 
      {
      	return top;
      }
      int *GetElem()//������� ������� 
      {
      	return p;
      }
      void printElem()//��� ���ϸ�Ԫ��ֵ 
      {
      	for(int i=0;i<GetTop();i++)
      	{cout<<p[i]<<'\t';}
      }
      friend int operator <=(Set &a,Set& b);
      friend Set  operator |(Set &a,Set& b);
      friend Set  operator &(Set &a,Set& b);
      friend Set  operator -(Set &a,Set& b);
      friend Set  operator +=(Set &a,Set& b);
      friend Set  operator -=(Set &a,Set& b);
};
////��Ԫ�������� 
int operator <=(Set &a,Set& b)
{
	int *p1,*p2;
	p1=a.GetElem();
	p1=b.GetElem();
	int i,j,k=0;
	for(i=0;i<a.GetTop();i++)
    {
	  for(j=0;j<b.GetTop();j++)
	    if(*(p1+j)==*(p2+i))
    	  k=1;
  	  if(k==0)
  	    return 0;
      k=0;
      return 1;
	}
}
Set  operator |(Set &a,Set& b)
{
	Set c;//���ֵ���趨 ?
	int *p1,*p2,i;
	p1=a.GetElem();
	p1=b.GetElem();
	for(i=0;i<a.GetTop();i++)
    {
      c.add(*(p1+i));
      for(int j=0;j<b.GetTop();j++)
      {
      while(*(p2+j)==*(p1+i)&&i<a.GetTop())
      {i++;}
      if(i==a.GetTop())
         c.add(*(p2+j));
      }
    }
   return c;	
}
Set  operator &(Set &a,Set& b)
{
	Set c;
	int *p1,*p2;
	p1=a.GetElem();
	p1=b.GetElem();
    for(int j=0;j<b.GetTop();j++)
    {
   	  int i=0;
      while(*(p2+j)==*(p1+i)&&i<a.GetTop())
      {i++;}
      if(i!=a.GetTop())
         c.add(*(p2+j));
    }
   return c;	
}
Set  operator -(Set &a,Set& b)
{
	Set c;
	int *p1,*p2;
	p1=a.GetElem();
	p1=b.GetElem();
	for(int i=0;i<a.GetTop();i++)
    {
    	int j=0;
      while(*(p2+j)==*(p1+i)&&i<a.GetTop())
      {i++;}
      if(i==a.GetTop())
         c.add(*(p2+j));
    }
   return c;
}
Set  operator +=(Set &a,Set& b)
{
	a=a&b;
	return a;
}
Set  operator -=(Set &a,Set& b)
{
	a=a-b;
	return a;
}

int main()
{
	Set A,B,C(200);
	A.add(1).add(3).add(4).add(5).add(6); 
	B.add(1).add(3).add(4).add(5).add(6); 
	if(A<=B)
	  cout<<"����A<=����B"<<endl;
	C=A|B;
	C.printElem();
	C=A&B;
	C.printElem();
	C=A-B;
	C.printElem();
	A+=B;
	A.printElem();	
	A-=B;
	C.printElem();
}
