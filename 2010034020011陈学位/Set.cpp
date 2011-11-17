#include<iostream>
using namespace std;
struct set_element{
	int x;
	set_element* son;
}*p,*q;
class Set{
	public:
		Set();
		~Set();
		bool Isempy();
		int size();
		bool IsElement(int e) const;
		bool IsSubset(const Set& s) const;
		bool IsEqual(const Set& s) const;
		Set& insert(int e);
		Set Union(const Set& s) const;
		Set intersection(const Set& s) const;
		Set difference(const Set &s)const;
	private:
		set_element *head,*sp,*sq;
		int count;
};
Set::Set(){
	count=0;
}
Set::~Set(){
	sp=head;
	sq=sp->son;
	while(sq){
		delete sp;
		sp=sq;
		sq=sq->son;
	}
}
bool Set::Isempy(){
	return head->son==NULL;
}
int Set::size(){
	return count;
}
bool Set::IsElement(int e) const{
	p=head;
	while(p->son){
		if(p!=head&&p->x==e)return true;
		p=p->son;
	}
	return false;
}
bool Set::IsSubset(const Set &s) const{
	p=s.head;
	p=p->son;
	q=head;
	while(p){
		int elem=p->x;
		bool found=false;
		while(q){
			if(q->x==elem){
				found=true;
			}
			else q=q->son;
		}
		if(!found)return false;
		p=p->son;
	}
	return true;
}
bool Set::IsEqual(const Set& s) const{
	return s.IsSubset(*this)&&IsSubset(s);
}
Set& Set::insert(int e){
	sq=head;
	while(sq->son){
		sq=sq->son;
	}
	sp=new set_element;
	if(!p)return *this;
	sp->x=e;
	sq->son=sp;
	count++;
	return *this;
}
Set Set::Union(const Set &s) const{
	Set newset;
	p=head->son;
	q=s.head->son;
	while(p){
		newset.insert(p->x);
		p=p->son;
	}
	while(q){
		if(!newset.IsElement(q->x)){
			newset.insert(q->x);
		}
		q=q->son;
	}
	return newset;
}
Set Set::difference(const Set &s) const{
	Set newset;
	p=s.head;
	p=p->son;
	q=head;
	while(p){
		int elem=p->x;
		bool found=false;
		while(q){
			if(q->x==elem){
				found=true;
			}
			else q=q->son;
		}
		if(!found){
			newset.insert(p->x);
		}
		p=p->son;
	}
	p=s.head;
	p=p->son;
	q=head;
	while(q){
		int elem=q->x;
		bool found=false;
		while(p){
			if(p->x==elem){
				found=true;
			}
			else p=p->son;
		}
		if(!found){
			newset.insert(q->x);
		}
		q=q->son;
	}
	return newset;
}
Set Set::intersection(const Set& s) const{
	Set newset;
	p=head->son;
	q=s.head->son;
	while(p){
		int elem=p->x;
		while(q){
			if(elem==q->x){
				newset.insert(elem);
			}
			q=q->son;
		}
		p=p->son;
	}
	return newset;
}

int main(int argc, char *argv[])
{
	Set A,B;
	for(int i=1;i<20;i++){
		A.insert(i);
		cout<<"     dddd\n";
	}
	for(int j=10;j<30;j++){
		B.insert(j);
	}
	cout<<A.IsElement(1)<<"  "<<A.IsElement(0)<<endl;
	cout<<A.IsEqual(B)<<endl;
	Set C=A.intersection(B);
	cout<<C.size()<<"  "<<C.IsElement(10)<<endl;
	return 0;
}
