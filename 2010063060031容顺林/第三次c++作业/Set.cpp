#include<iostream>
#define Maxsize 100
using namespace std;
class Set
 {
 	private:
 	int *p;
 	int top;
 	int max;
 	public:
 	Set();
 	Set(int );
 	bool IsEmpt();
    int Size();
 	bool IsElement(int );
 	bool IsEqual(Set ,Set );
 	bool insert(int );
 	bool Union(Set,Set);
	Set difference(const Set&)const;
	bool intersection(Set ,Set ); 
 }; 
 Set::Set(int max)
 {   
 this->max=max;
 top=0;
 p= new int [max];
 }
 bool Set::IsEmpt()
 {
 	if(top==0)
 	return true;
 	else 
 	return false;
 }
 int Set::Size()
 {
 	return top+1;
 }
 bool Set::IsElement(int e)
 {  int temp=0;
 	for(int i=0;i<top;i++)
 	{
 		if(p[i]==e)
 		{   temp=1;
 			return true;
 			break;
	    }
    }
    if(temp==0)
    return false;
 }
 bool Set::IsEqual(Set a,Set b)
 {  
 	if(a.top!=b.top)
 	return false;
 	int c[a.top];
 	int i=0,j=0,m=0;
 	for(i=0;i<a.top;i++)
 	for(j=0;j<b.top;j++)
 	{
 		if(a.p[i]==b.p[j])
 		{
 			c[m]=1;
 			m++;
		 }
    }
    for(int q=0;q<a.top;q++)
	{
		if(c[q]!=1)
		{
			return false;
			break;
		}
	} 
 }
 bool Set::insert(int e)
 {  int temp=0;
 	for(int i=0;i<top;i++)
 	{
 		if(p[i]==e)
 		{   temp=1;
 			return false;
 			break;
	    }
    }
    if(temp==0)
    {
	p[top]=e;
    top+=1;
    return true;
    }
 }
 bool Set::intersection(Set a,Set b)
 {
 	Set c;
 	for(int i=0;i<a.top;i++)
 	for(int j=0;j<b.top;j++)
 	{
 		if(a.p[i]==b.p[j])
 		{
		 c.insert(b.p[j]);
		 return true;
 		}
    }
 	
 }
 bool Set::Union(Set a,Set b)
 {
 	Set c;
 	max=2*max;
 	c.p=new int[max];
 

	
 }
 
  
 
