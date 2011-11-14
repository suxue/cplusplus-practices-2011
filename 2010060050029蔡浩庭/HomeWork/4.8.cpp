#include<iostream>
using namespace std;
struct node{
 char a;
 struct node *next,*pre;
};
void listcopy(node *p1,node *p2){
	while(p1->next!=NULL){
	   p1=p1->next;
    }
    if(p2->next!=NULL){
	p2->a=p1->a;
	p2=p2->next;
	p1=p1->pre;
    }
}
void insernode(node *p,node *newp){
	if(p->next==NULL){
	p->next=newp;
	newp->pre=p;
	newp->next=NULL;
	p=p->next;
	}
}
void displist(node *head){
	node *p;
	p=head;
	while(p!=NULL){
		cout<<p->a<<endl;
		p=p->next;
	}
}
int main(){
node *p1,*p2,*head,*p;
char a;
int n,m=0;
head=new node;
head->next=NULL;
cout<<"请依次输入每一个字母，以0结束："<<endl;
cin>>a;
while(a!='0'){
	if((p1=new node)==NULL)cout<<"fail!"<<endl;
	p1->a=a;
	p1->next=NULL;
	p1->pre=NULL;
	insernode(head,p1);
	cin>>a;
}
cout<<"请输入字母的个数："<<endl;
cin>>n;
cout<<"你输入的是："<<endl; 
displist(head);
listcopy(head,p2);
for(int i=0;i<n;i++){
	if((head->a)==(p2->a)){
		m++;
		p2=p2->next;
		head=head->next;
	}
}
if(n==m)cout<<"你输入的是回文！"<<endl;
else cout<<"你输入的不是回文！"<<endl;
return 0; 
}