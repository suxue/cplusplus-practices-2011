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
	  		for (int i=1;i<n;i++) ps[i]=s.ps[i];
	  		}
	  	}
	 ~Set()
	 {
	 	if(ps){
	 		delete []ps;
	 		ps=NULL;
	 		n=0;
	 		}
	 	}
	void ShowElement()const{
		cout<<"{";
		for(int i=1;i<n;i++)
		   cout<<ps[i]<<",";
		   cout<<ps[n]<<"}"<<endl;
		}
	   bool IsEmpt(){
	   	return n?false:true;
	   	}
	int size(){
	  return n;
		}
	bool IsElement(int e)const;
	bool IsSubset(const Set &s)const;
	bool IsEqual(const Set &s)const;
	Set & insert(int e);
	Set Union(const Set & s)const;
	Set intersection(const Set & s)const;
	Set difference(const Set &s)const;
	};
bool Set::IsElement(int e)const
{
	for(int i=1;i<=n;i++){
		if( ps[i]==e){
			return true;
			}
		return false;
		}
	}
bool Set:: IsSubset(const Set &s)const
{
	if(s.n>n) return false;
	for(int i=1;i<=s.n;i++){
		if(!IsElement(s.ps[i])){
			return false;
			}
		  return true;
		}
	}
bool Set::IsEqual(const Set &s)const
{
	if(n!=s.n) return false;
	if(IsSubset(s)){
		return true;
		}
	  return false;
	}
Set & Set::insert(int e){
	if(IsElement(e)) return *this;
	Set tempe;
	for(int i=1;i<=n;i++) 
		tempe.insert (ps[i]);
	n++;
	if(ps!=NULL)
	    delete[]ps;
	 ps=new int[n+1];
	for(i=1;i<n;i++)
	    ps[i]=tempe.ps[i];
	ps[n]=e;
	return *this;	
	}
Set Set::Union(const Set &s)const
{
	Set Rs;
	for(int i=1;i<=n;i++)
	   Rs.insert(ps[i]);
	for(i=1;i<=s.n;i++){
		if(!IsElement(s.ps[i]))
		   Rs.insert(s.ps[i]);
		}
	return Rs;
	}
Set Set::intersection(const Set &s)const
{
	Set Rs;
	for(int i=1;i<=s.n;i++)
	   if(IsElement(s.ps[i]))
	   Rs.insert(s.ps[i]);
	return Rs;
	}
Set Set::difference(const Set &s)const
{
	Set Rs;
	for(int i=1;i<=n;i++)
	    if(!(s.IsElement(ps[i])))
	       Rs.insert(ps[i]);
	return Rs;
	}

void main()
{
 Set s1;
 s1.insert(1);
 if(!s1.IsElement(3))
       s1.insert(3);
 s1.insert(1);s1.insert(2);
 
 cout<<"s1=";
 s1.ShowElement();
 cout<<"size:"<<s1.size()<<endl;
 
 Set s2;
 s2.insert(1);s2.insert(3);s2.insert(5);s2.insert(6);
 cout<<"s2=";
 s2.ShowElement();
 
 Set s3(s1);
 cout<<"s3=";
 s3.ShowElement();
 
 cout<<"s1==s2? ";
 cout<<((s1.IsEqual(s2))?"YES":"NO")<<endl;
 cout<<"s1==s3?";
 cout<<((s1.IsEqual(s3))?"YES":"NO")<<endl;
 
 Set s4;
 s4.insert(1);s4.insert(3);
 cout<<"s4=";
 s4.ShowElement();
 
 cout<<"s4 is a subset of s1?";
 cout<<((s1.IsSubset(s4))?"YES":"NO")<<endl;
 cout<<"s1 Union s2=";
 s1.Union(s2).ShowElement();
 cout<<"s1 intersection s2=";
 s1.intersection(s2).ShowElement();
 cout<<"s1 difference s2=";
 s1.difference(s2).ShowElement();
    
    
}