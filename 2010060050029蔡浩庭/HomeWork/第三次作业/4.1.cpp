#include<iostream>
using namespace std;
struct rankint{
	int a;
	struct rankint *next,*pre;
};
typedef rankint node; 
node *search(node *head,int key){
	node *p;
	p=head;
	while(p->next!=NULL){
		if(p->next->a>key)return p;
		p=p->next;
	}
	return p;
};
void insernode(node *p,node *newp){
	newp->next=p;
	p->pre=newp;
}
void delnode(node *p){
	p->pre->next=p->next;
	p->next->pre=p->pre;
	delete p;
}
void displist(node *head){
	node *p;
	p=head;
	while(p->next!=NULL){
		cout<<p->next->a<<endl;
		p=p->next;
	}
}
int main(){
	node *newp1,*newp2,*newp3,*head,*p;
	int a;
	if((newp1=new node)==NULL){
		cout<<"new node fail!"<<endl;
		
	}
		if((newp2=new node)==NULL){
		cout<<"new node fail!"<<endl;
		
	}
		if((newp3=new node)==NULL){
		cout<<"new node fail!"<<endl;
		
	}
	head=newp1;
	head->next=NULL;
	cout<<"输入正整数，-1结束！:"<<endl;
	cin>>a;
	while(a>0){
		if((newp1=new node)==NULL){
			cout<<"new node fail!"<<endl;			
		}
	newp1->a=a;
	newp1->next=NULL;
	p=search(head,newp1->a);
	insernode(p,newp1);
	cin>>a;
	}
	displist(head);
	while(newp2->next!=NULL&&newp3->next!=NULL){
		if((head->a)%2==0){
			newp2->next=head;
			newp2=newp2->next;
		}
		else{
		    newp3->next=head;
			newp3=newp3->next;
		}
	}
	displist(newp2);
	displist(newp3);
	return 0;
}