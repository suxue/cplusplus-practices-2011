#include<iostream>
using namespace std;
class Set{
	private:
	int n,m,G[20];
	public:
	Set()
	{
		this->m=0;this->n=0;
	}
	void display(){
		cout<<"{";
		for(int i=0;i<n-1;i++)
			cout<<G[i]<<",";
		cout<<G[n-1]<<"}"<<endl;
	}
	Set insert(int e){
		if(IsElement(e))
		return *this;
		else
		{G[m]=e;m++;n++;
		return *this;}
	}
	bool IsEmpt(){
		return (n?false:true);
	}
	int size(){
		return n;
	}
	bool IsElement(int e)const{
		for(int i=0;i<n;i++)
			if(G[i]==e)
			  return true;
		return false;
	}
	bool IsSubset(const Set& s)const{
		for(int i=0;i<n;i++)
		  if(!(IsElement(s.G[i])))
		    return false;
	    return true;
	}
	bool IsEqual(const Set& s)const{
		if(IsSubset(s)&&s.IsSubset(*this))
		return true;
		else
		return false;
	}
	Set Union(const Set& s)const{
		Set C;
		for(int i=0;i<s.n;i++)
		   C.insert(s.G[i]);
		for(int i=0;i<s.n;i++){
		     if(!(s.IsElement(G[i])))
		     C.insert(G[i]);}
	   return C;
	}
	Set Intersection(const Set& s)const{
		Set C;
		for(int i=0;i<s.n;i++)
		   if(IsElement(s.G[i]))
		     C.G[C.n++]=s.G[i];
       return C;
	}
	Set difference(const Set& s)const{
		Set C;
		for(int i=0;i<n;i++)
		   if(!(s.IsElement(G[i])))
		     C.insert(G[i]);
       return C;
	}
};
int main(){
	Set A1,A2,A3; 
	A1.insert(1);A1.insert(2);A1.insert(3);A1.insert(4);
	A2.insert(5);A2.insert(6);A2.insert(3);A2.insert(4);
	A3.insert(1);A3.insert(3);A3.insert(4);
	cout<<"A1=";
	A1.display();
	cout<<"A2=";
	A2.display();
	cout<<"A3=";
	A3.display();
	if(A1.IsEmpt())
	cout<<"A1是空的"<<endl;
	else
	cout<<"A1不是空的"<<endl;
	cout<<"A1的元素个数是："<<A1.size()<<endl;
	if(A1.IsElement(3))
	cout<<"3是A1的元素"<<endl;
	else
    cout<<"3不是A1的元素"<<endl;
    if(A1.IsSubset(A3))
    cout<<"A3包含于A1"<<endl;
    else
    cout<<"A3不包含于A1"<<endl;
    if(A1.IsEqual(A2))
    cout<<"A2等于A1"<<endl;
    else
    cout<<"A2不等于A1"<<endl;
    cout<<"A1和A2的并集是：";
	(A1.Union(A2)).display();
	cout<<"A1和A2的交集是：";
	(A1.Intersection(A2)).display();
	cout<<"A1和A3的差集是：";
	(A1.difference(A3)).display();
	return 0;
}