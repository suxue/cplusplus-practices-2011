#include<iostream>
using namespace std;
struct link{
							char a[7];
							char b[12];
							link *next ;
							link *other;
						};
link* CreatL(int n){                       //链表创建 pass!
		link *p,*head;
		head=new link();
		p=head;
		int i;
		for(i=1;i<=n;i++){

				p->next=new link();
				p->other=p->next;
				p=p->next;
				cout<<"input p"<<"("<<i<<")"<<endl<<"姓名:"<<endl;

				cin>>p->a;
				cout<<"电话:"<<endl;
                 cin>>p->b;
			}

		p->next=new link();
		p->next->next=NULL;
		p->other=p->next;                  //链表创建 pass!n为节点数,其中有两个空指针，第一和最后其目的是让后面的方法在第一次遍历时有头尾空节点
		p->other->other=NULL;
		p->other->a={'#','#','#','#','#','#','#'};p->other->b={'*','*','*','*','*','*','*','*','*','*'};
		return head;
	}
 void SearchNC(link *head,char *ch){        //针对输入是汉字的查找
	 int i=0;
	 link *x,*y,nall;
	 nall.a={'*','*','*','*','*','*','*'};nall.b={'*','*','*','*','*','*','*','*','*','*'};
	 nall.next=NULL;nall.other=NULL;   //nall的目的是然每次遍历后形成的新链表会有一个空的头结点和尾巴节点
	 x=head->other;
	 y=head;
	 while(*(ch+i)!='\0'){

		do{

			 if(x->a[i]==*(ch+i)&&x->a[i+1]==*(ch+i+1)){    //由于一个汉字是两个字节，所以每次要比较两个字节里的类容：

			 		 		 y->other=x;
			 		 		 y=y->other;
			 		 		 x=x->other;
			 		 	 }else{
			 		 		 x=x->other;
			 		 	 }
		 } while(x->other!=NULL);
		if(y->other==head->other){
			cout<<"sorry !we can't find the message "<<endl;
			y->other=NULL;
			break;
		}
		 y->other=&nall;
		 y->next=&nall;
		 y=head;
		 x=head->other;
         i=i+2;
	 }

 if(y->other!=NULL){
	 cout<<"查询结果是："<<endl;
	 do{
	 		   y=y->other;
	 		  cout<<"姓名："<<y->a<<endl<<"电话："<<y->b<<endl<<endl;
	 	   }while(y->other!=NULL);

 }

y=head;
do{                                             //还原链表中的other指针，以便下次查找；
	y->other=y->next;
	y=y->next;
}while(y->next!=NULL);
y=head;
 }
 void SearchNE(link *head,char *ch){    //针对输入是汉字的查找
	 int i=0;
	 link *x,*y,nall;
	 nall.a={'*','*','*','*','*','*','*'};nall.b={'*','*','*','*','*','*','*','*','*','*'};
	 nall.next=NULL;nall.other=NULL;
	 x=head->other;
	 y=head;
	 while(*(ch+i)!='\0'){

		do{

			 if(x->a[i]==*(ch+i)){

			 		 		 y->other=x;
			 		 		 y=y->other;
			 		 		 x=x->other;
			 		 	 }else{
			 		 	 x=x->other;
			 		 	 }
		 }while(x->other!=NULL);
		if(y->other==head->other){
					cout<<"sorry !we can't find the message "<<endl;
					y->other=NULL;
					break;
				}
		y->other=&nall;
		 y->next=&nall;
		 y=head;
	     x=head->other;
         i++;
	 }

if(y->other!=NULL){
	cout<<"查询结果是："<<endl;      //输出查找结果
	do{
			   y=y->other;
			   cout<<"姓名："<<y->a<<endl<<"电话："<<y->b<<endl<<endl;

		   }while(y->other!=NULL);
}


y=head;
do{                                             //还原链表中的other指针，以便下次查找；
	y->other=y->next;
	y=y->next;
}while(y->next!=NULL);
y=head;
 }
 void SearchNM(link *head,char *ch){    //针对输入是汉字的查找
	 int i=0;
	 link *x,*y,nall;
	 nall.a={'*','*','*','*','*','*','*'};nall.b={'*','*','*','*','*','*','*','*','*','*'};
	 nall.next=NULL;nall.other=NULL;
	 x=head->other;
	 y=head;
	 while(*(ch+i)!='\0'){

		do{

			 if(x->b[i]==*(ch+i)){

			 		 		 y->other=x;
			 		 		 y=y->other;
			 		 		 x=x->other;
			 		 	 }else{
			 		 	 x=x->other;
			 		 	 }
		 }while(x->other!=NULL);
		if(y->other==head->other){
					cout<<"sorry !we can't find the message "<<endl;
					y->other=NULL;
					break;
				}
		y->other=&nall;
		 y->next=&nall;
		 y=head;
	     x=head->other;
         i++;
	 }

if(y->other!=NULL){
	cout<<"查询结果是："<<endl;        //输出查找结果
	do{
			   y=y->other;
			   cout<<"姓名："<<y->a<<endl<<"电话："<<y->b<<endl<<endl;

		   }while(y->other!=NULL);
}


y=head;
do{                                             //还原链表中的other指针，以便下次查找；
	y->other=y->next;
	y=y->next;
}while(y->next!=NULL);
y=head;
 }
int main(){
	int n;
	char *Lhead;
	char jgs[7];
	char jg,jg2;
	link *headL;
	link *headL1;



do{
	cout<<"a,创建通讯录  "<<"b,中文姓名查找（支持不忘全查找，但是只针对小于四个字的名字）"<<"c,英文姓名查找（支持不忘全查找，但是只针对小于6个字的名字）"<<
					"d,使用号码查询（支持不忘全查找，小于等于11位）"<<"e,退出程序"<<endl;
				cin>>jg;
				switch(jg){
				case 'a':

					cout<<"请输入通讯录的人数：（小于30）"<<endl;
					cin>>n;
					if(n<=0){
						n=10;
					}
					headL1=headL=CreatL(n);
					cout<<"你建的通讯录是："<<endl;
					do{
						headL=headL->next;
						 cout<<"姓名："<<headL->a<<endl<<"电话："<<headL->b<<endl<<endl;
					}while(headL->next!=NULL);
					headL=headL1;
					break;
				case 'b':
					cout<<"输入姓名："<<endl;
					cin>>jgs;
					Lhead=&jgs[0];
					SearchNC(headL,Lhead);
					headL=headL1;
					break;
				case 'c':
					cout<<"输入姓名："<<endl;
									cin>>jgs;
									Lhead=&jgs[0];
									SearchNE(headL,Lhead);
									headL=headL1;
									break;

				case 'd':
					cout<<"输入号码："<<endl;
												cin>>jgs;
												Lhead=&jgs[0];
												SearchNM(headL,Lhead);
												headL=headL1;
												break;

		}



}while(jg!='e');

    return 0;
}
