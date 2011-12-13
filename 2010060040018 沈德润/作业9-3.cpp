// Note:Your choice is C++ IDE
#include <iostream>
using namespace std;
class Set
{
	private:
	   int n;
	   int *ps;
	public:
	   Set(){
	   	n=0;
	   	ps=NULL;
	   }
	  Set(Set &s){
	  	n=s.n;
	  	if(n!=0){
	  		ps=new int[n+1];
	  		for(int i=1;i<n;i++)
	  		    ps[i]=s.ps[i];
	  		}
	  	}
	~Set(){
		if(ps){
			delete []ps;
			ps=NULL;
			n=0;
			}
		}
	void ShowElement()const
	{
		cout<<"{";
		for(int i=1;i<n;i++){
			cout<<ps[i]<<",";
			cout<<ps[n]<<"}"<<endl;
			}
		}
bool IsEmpt(){
	return n?false:true;
	}	
int size(){return n;}
bool IsElement(int e)const;
bool operator<=(const Set &s)const;
bool operator==(const Set &s)const;
Set& operator+=(int e);
Set& operator-=(int e);
Set operator|(const Set &s)const;
Set operator&(const Set &s)const;
Set operator-(const Set &s)const;
};

bool Set::IsElement(int e)const
{
	for(int i=1;i<=n;i++)
	    if(ps[i]==e)
	         return true;
	    return false;
}

bool Set::operator<=(const Set &s)const
{
	if(n>s.n)
	   return false;
	for(int i=1;i<=n;i++){
		if(!s.IsElement(ps[i]))
		     return false;
		}
	return true;
	}
bool Set::operator==(const Set &s)const
{
	if(n!=s.n)
	    return false;
	if((*this)<=s&&s<=(*this))
	    return true;
	}

Set & Set::operator+=(int e)
{
	if(IsElement(e)) return *this;
	Set tempe;
	for(int i=1;i<=n;i++)
	     tempe+=ps[i];
	n++;
	if(ps!=NULL)
	    delete[]ps;
	ps=new int[n+1];
	for(i=1;i<n;i++)
	    ps[i]=tempe.ps[i];
	    ps[n]=e;
	    return *this;
	}

Set & Set::operator-=(int e)
{
	if(!(IsElement(e)))
	    return *this;
	for(int i=1;i<=n;i++)
	   if(ps[i]==e)
	       break;
	for(int j=i;j<n;j++)
	     ps[i]=ps[i+1];
	n--;
	return (*this);
}

Set Set::operator|(const Set &s)const
{
	Set Rs;
	for(int i=1;i<=n;i++)
	    Rs+=ps[i];
	for(i=1;i<=s.n;i++)
	    if(!IsElement(s.ps[i]))
	       Rs+=s.ps[i];
	return Rs;
}

Set Set::operator&(const Set &s)const
{
	Set Rs;
	for(int i=1;i<=s.n;i++)
	    if(!IsElement(s.ps[i]))
	       Rs+=s.ps[i];
	return Rs;
}

Set Set::operator-(const Set &s)const
{
	Set Rs;
	for(int i=1;i<=n;i++)
	 
 
	    if(!(s.IsElement(s.ps[i])))
	       Rs+=s.ps[i];
	return Rs;
}

int main()
{
	Set s1;
	s1+=1;s1+=2;s1+=3;
	cout<<"s1=";
	s1.ShowElement();
	Set s2;
	s2+=1;s2+=3;s2+=5;s2+=6;
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
	cout<<"s1==s3?"<<(s1==s3)<<endl;
    cout<<"s1|s2=";
    (s1&s2).ShowElement();
    cout<<"s1-s2=";
    (s1-s2).ShowElement(); 
    
    return 0;
}