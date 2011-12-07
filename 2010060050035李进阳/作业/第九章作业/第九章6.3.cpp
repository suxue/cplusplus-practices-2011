#include<iostream>
using namespace std;
class Set 
{
	private:
	  int n;
	  int *pS;
	public:
	  Set ()
  	
  	{n=0; pS=NULL;}	
	  Set (Set &s)
{
	 n=s.n;
	 if(n!=0)
	 {
 		pS=new int[n+1];
 		int i=1;
 		for(;i<=n;i++)
 		   pS[i]=s.pS[i];
 		   
 	}
}
~Set ()
{
	  if(pS)
	  {
  		delete []pS;
  		pS=NULL;
  		n=0;
 		}
 		
}
void ShowElement ()const
{
	cout<<"{";
	int i=1;
	for(;i<n;i++)
	  cout<<pS[i]<<",";
	  cout<<pS[n]<<"}"<<endl;
	  
 }
 bool IsEmpt() {return n?false:true;}
 int size()  {return n;}
 bool IsElement(int e)const;
 bool operator<=(const Set &s)const;
 bool operator==(const Set &s)const;
 Set& operator+=(int e);
 Set& operator-=(int e);
 Set& operator |(const Set &s)const;
 Set& operator &(const Set &s)const;
 Set& operator -(const Set &s)const; 
};

bool Set::IsElement(int e)const
{
	int i=1;
	for(;i<=n;i++)
	 if(pS[i]==e)
	 return true;
	return false ;
	 
}

bool Set::operator<=(const Set &s)const
{
	if(n>s.n)
	return false;
	int i=1;
	for(;i<=n;i++)
	  if(!s.IsElement(pS[i]))
	  return false;
	return true;  
}	

bool Set::operator==(const Set &s)const
{
	if(n!=s.n)
	return false;
  	if((*this)<=s&&s<=(*this))
  	return true;
  return false;
  	
}

Set & Set::operator+=(int e)
{
	if(IsElement(e)) return *this;
	Set tempe;
	int i=1;
	for(;i<=n;i++)
	    tempe+=pS[i];
		n++;
     if(pS!=NULL)
        delete []pS;
      pS=new int [n+1];
	  
	  for(i=1;i<n;i++)
	    pS[i]=tempe.pS[i];
		pS[n]=e;
		return *this;  
		
	
}
Set & Set::operator-=(int e)
{  	 
 if(!(IsElement(e)))
      return *this;
      int i=1;
      for(;i<=n;i++)
      if(pS[i]==e)
        break;
      int j=1;
	  for(;j<n;j++)
	  pS[i]=pS[i+1];
	  n--;
	  return (*this);
}
Set & Set::operator | (const Set &s)const
{
	
	Set Rs;
	int i=1;
	for(;i<=n;i++)
	 Rs+=pS[i];
	
	for(i=1;i<=s.n;i++)
	  if(!IsElement(s.pS[i]))
	  Rs+=s.pS[i];
	return Rs;   
}
Set & Set::operator & (const Set &s)const
{
	Set Rs;
	int i=1;
	for(;i<=s.n;i++)
	 if(IsElement(s.pS[i]))
	    Rs+=s.pS[i];
	 return Rs;   
}
Set & Set::operator-(const Set &s)const
{
	Set Rs;
	int i=1;
	for(;i<=n;i++)
	if(!(s.IsElement(pS[i])))
	    Rs+=pS[i];
	    return Rs;
	
}
int main()
{
	Set s1;
	s1+=1;
	s1+=2;
	s1+=3;
	cout<<"s1=";
	s1.ShowElement();
	Set s2;
	s2+=1;
	s2+=3;
	s2+=5;
	s2+=6;
	cout<<"s2=";
	s2.ShowElement();
	cout<<"s1==s2?"<<(s1==s2)<<endl;
	s2-=5;
	cout<<"s2-5=";
	s2.ShowElement();
	Set s3(s1);
	cout<<"s3=";
	s3.ShowElement();
	cout<<"s1==s3?"<<(s1==s3)<<endl;
	s3+=9;
	cout<<"s3+9=";
	s3.ShowElement();
	cout<<"s1<=s3?"<<(s1<=s3)<<endl;
	cout<<"s1|s2=  ";
	(s1|s2).ShowElement();
	cout<<"s1&s2=  ";
	(s1&s2).ShowElement();
	cout<<"s1-s2=  ";
	(s1-s2).ShowElement();
	
}

