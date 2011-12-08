#include <iostream>
using namespace std;
class Set
{
	private:
		int n;
		int *ps;
	public:
		Set() {
			n=0;
			ps=NULL;
		}
		Set(Set &s)
		{
			n=s.n;
			if(n!=0)
			{
				ps=new int[n+1];
				for (int i=1;i<=n;i++)
					ps[i]=s.ps[i];
			}
		}
		~Set()
		{
			if(ps)
			{
				delete []ps;
				ps=NULL;
				n=0;
			}
		}
		void ShowElement() const 
		{
			cout<<"{ ";
			for(int i=1;i<n;i++)
				cout<<ps[i]<<",";
			cout<<ps[n]<<" }"<<endl;
		}
		bool IsEmpt(){
			return n?false:true;
		}
		int size(){
			return n;
		}
		bool IsElement(int e) const;
		bool IsSubset(const Set &s)const;
		bool IsEqual(const Set &s)const;
		Set &insert(int e);
		Set Union(const Set &s)const;
		Set intersection(const Set &s)const;
		Set difference(const Set &s)const;
};
bool Set::IsElement(int e)const
{
	for(int i=1;i<=n;i++)
		if (ps[i]==e)
			return true;
		return false;
} 
bool Set::IsSubset(const Set &s)
{
	if(s.n>n)
		return false;
	for (int i=1;i<=s.n;i++)
		if(!IsElement(s.ps[i]))
			return false;
	return true;
}
Set &Set::insert(int e)
{
	if(IsElement(e))
		return *this;
	Set temp;
	for(int i=1;i<=n;i++)
		temp.insert(ps[i]);
	n++;
	if(ps!=NULL)
		delete []ps;
	ps=new int[n+1];
	for(i=1;i<n;i++)
		ps[i]=temp.ps[i];
	ps[n]=e;
	return *this; 
}
Set Set::Union(const Set &s)const
{
	Set rs;
	for(int i=1;i<=s.n;i++)
		rs.insert(ps[i]);
	for(i=1;i<=s.n;i++)
	{
		if(!IsElement(s.ps[i]))
			rs.insert(s.ps[i]);
	}
	return rs; 
}
Set Set::intersection(const Set &s)const
{
	Set rs;
	for(int i=1;i<=s;i++)
		if(IsElement(s.ps[i]))
			rs.insert(s.ps[i]);
	return rs;
}
Set Set::difference(const Set &s)const
{
	Set rs;
	for(int i=1;i<=n;i++)
		if(!(s.IsElement(ps[i])))
			rs.insert(ps[i]);
	return rs;
}

