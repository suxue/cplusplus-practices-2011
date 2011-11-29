#include<iostream>
using namespace std;
class Set{

	public:
		int *n;
		int longth;
	
	Set(int longth){
		this->n=(int *)malloc(longth*(sizeof(int)));
		int *p;
		p=this->n;
		cout<<"please input "<<longth<<" numbers:"<<endl;
		for(int i=0;i<longth;i++,p++){
			cin>>*p;
		}
	}
	Set(){
		this->n=NULL;
		this->longth=0;
	}
	bool IsEmpty(){
		if(this->n==NULL)return true;
		else return false;
	}
	int Size(){
		return longth;	
	}
	bool IsElement(int e) const{
		int *p,temp=0;
		p=this->n;
		int i;
		for(i=0;i<(this->longth);i++,p++){
			if(*p==e&&i<(this->longth)) temp=1;
		}
		if(temp==1)return true;
		else return false;
	}
	bool IsSubset(const Set& s)const{
		int *q,temp=1;
		q=s.n;
		for(int i=1;i<s.longth;i++,q++){
			if(this->IsElement(*q)==false)temp=0;
		}
		if(temp==1)return true;
		else return false;
	}
	bool IsEqueal(const Set&s)const{
		if(s.IsSubset(*this)&&this->IsSubset(s))return true;
		else return false;
	}
	Set  insert(int e)const{
		Set set;
		set.longth=this->longth+1;
		int *p;
		p=this->n;
		p=(int *)realloc(p,set.longth*sizeof(int));
		set.n=p;
		while((set.longth--)>0)
				p++;
		*p=e;
		return set;
	}
	Set Union(const Set& s)const{
		int *p;
		p=s.n;
		Set set;
		set=*this;
		for(int i=0;i<s.longth;i++,p++)
			if(this->IsElement(*p)==false){
			set.insert(*p);
			set.longth++;
			}
		return set;
	}
	Set intersection(const Set& s)const{
		int *p;
		p=s.n;
		Set set;
		for(int i=1;i<s.longth;i++,p++){
			if(this->IsElement(*p)==true){
					set.insert(*p);
					set.longth++;
			}
		}
		return set;	
	}
	Set difference(const Set& s)const{
		int *p;
		p=this->n;
		Set set;
		for(int i=1;i<this->longth;i++,p++){
			if(s.IsElement(*p)==true)
			{	set.insert(*p);
				set.longth++;
			}
		}
	}
	
};
