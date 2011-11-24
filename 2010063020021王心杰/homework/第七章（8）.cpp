#include<iostream>
using namespace std;
typedef struct node{
	int data;
	struct node *next;
}ListNode,*ListNodePtr;
class Set{
	public:
	ListNodePtr h;
	bool IsEmpt(){
	if(h==NULL)
	return true;
	else
	return false;	
	}
	int size(){
		ListNodePtr t=h;
		int s=0;
		while(t!=NULL){
			s++;
			t=t->next;
		}
	}
	bool IsElement(int a) const{
		ListNodePtr t=h;
		while(t!=NULL){
			if(t->data==a)
			break;
			else
			t=t->next;
		}
		if(t==NULL) return false;
		else return true;
	}
	bool IsSubset(const Set& s) const{
		ListNodePtr t1=h,t2=s.h;
		while(t2!=NULL){
			while(t1!=NULL){
				if(t2->data==t1->data) break;
				t1=t1->next;
			}
			if(t1!=NULL) t2=t2->next;
			else break;
		}
		if(t1!=NULL) return true;
		else return false;
	}
	bool IsEqual(const Set& s) const{
		bool a,b;
		a=IsSubset(s);
		b=s.IsSubset((*this));
		if(a&&b) return true;
		else return false;
	}
	Set& Insert(int e){
		ListNodePtr t=h;
		while(t!=NULL){
			if(t->data=e) break;
			t=t->next;
		}
		if(t==NULL){
			ListNodePtr p;
			p=new ListNode;
			p->next=h->next;
			p->data=e;
			h->next=p;
		}
		return *this;
	}
	Set Union(const Set& s) const{
	Set temp;
	ListNodePtr t1=h,t2;
	t2=new ListNode;
	temp.h=t2;
	while(t1!=NULL){
		ListNodePtr p;
		p=new ListNode;
		p->data=t1->data;
		p->next=NULL;
		t2->next=p;
		t2=p;
		t1=t1->next;
	}
	temp.h=temp.h->next;
    t1=temp.h,t2=s.h;
		while(t2!=NULL){
			while(t1!=NULL){
				if(t2->data==t1->data) break;
				t1=t1->next;
			}
			if(t1!=NULL) t2=t2->next;
			else{
				ListNodePtr p;
                p=new ListNode;
                p->next=h->next;
			    p->data=t2->data;
			    h->next=p;
			    t2=t2->next;
			}
		}
		return temp;
	}
	Set Intersection(const Set& s) const{
		Set temp;
		temp.h=new ListNode;
		ListNodePtr t1=h,t2=s.h,t3=temp.h;
		while(t2!=NULL){
			while(t1!=NULL){
				if(t2->data==t1->data) break;
				t1=t1->next;
			}
			if(t1!=NULL){
				ListNodePtr t;
				t=new ListNode;
			    t->data=t1->data;
			    t->next=NULL;
			    t3->next=t;
			    t3=t;			    
			}
			t2=t2->next;
		}
		temp.h=temp.h->next;
		return temp;
	}
	Set Differnce(const Set& s) const{
		Set temp;
		temp.h=new ListNode;
		ListNodePtr t1=h,t2=s.h,t3=temp.h;
		while(t1!=NULL){
			while(t2!=NULL){
				if(t2->data==t1->data) break;
				t2=t2->next;
			}
			if(t2==NULL){
				ListNodePtr t;
				t=new ListNode;
			    t->data=t1->data;
			    t->next=NULL;
			    t3->next=t;
			    t3=t;			    
			}
			t1=t1->next;
		}
		temp.h=temp.h->next;
		return temp;
	}
	
};
int main(){
	
}
