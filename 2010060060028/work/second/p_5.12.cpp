#include<iostream>
using namespace std;
struct link{
							char a[7];
							char b[12];
							link *next ;
							link *other;
						};
link* CreatL(int n){                       //������ pass!
		link *p,*head;
		head=new link();
		p=head;
		int i;
		for(i=1;i<=n;i++){

				p->next=new link();
				p->other=p->next;
				p=p->next;
				cout<<"input p"<<"("<<i<<")"<<endl<<"����:"<<endl;

				cin>>p->a;
				cout<<"�绰:"<<endl;
                 cin>>p->b;
			}

		p->next=new link();
		p->next->next=NULL;
		p->other=p->next;                  //������ pass!nΪ�ڵ���,������������ָ�룬��һ�������Ŀ�����ú���ķ����ڵ�һ�α���ʱ��ͷβ�սڵ�
		p->other->other=NULL;
		p->other->a={'#','#','#','#','#','#','#'};p->other->b={'*','*','*','*','*','*','*','*','*','*'};
		return head;
	}
 void SearchNC(link *head,char *ch){        //��������Ǻ��ֵĲ���
	 int i=0;
	 link *x,*y,nall;
	 nall.a={'*','*','*','*','*','*','*'};nall.b={'*','*','*','*','*','*','*','*','*','*'};
	 nall.next=NULL;nall.other=NULL;   //nall��Ŀ����Ȼÿ�α������γɵ����������һ���յ�ͷ����β�ͽڵ�
	 x=head->other;
	 y=head;
	 while(*(ch+i)!='\0'){

		do{

			 if(x->a[i]==*(ch+i)&&x->a[i+1]==*(ch+i+1)){    //����һ�������������ֽڣ�����ÿ��Ҫ�Ƚ������ֽ�������ݣ�

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
	 cout<<"��ѯ����ǣ�"<<endl;
	 do{
	 		   y=y->other;
	 		  cout<<"������"<<y->a<<endl<<"�绰��"<<y->b<<endl<<endl;
	 	   }while(y->other!=NULL);

 }

y=head;
do{                                             //��ԭ�����е�otherָ�룬�Ա��´β��ң�
	y->other=y->next;
	y=y->next;
}while(y->next!=NULL);
y=head;
 }
 void SearchNE(link *head,char *ch){    //��������Ǻ��ֵĲ���
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
	cout<<"��ѯ����ǣ�"<<endl;      //������ҽ��
	do{
			   y=y->other;
			   cout<<"������"<<y->a<<endl<<"�绰��"<<y->b<<endl<<endl;

		   }while(y->other!=NULL);
}


y=head;
do{                                             //��ԭ�����е�otherָ�룬�Ա��´β��ң�
	y->other=y->next;
	y=y->next;
}while(y->next!=NULL);
y=head;
 }
 void SearchNM(link *head,char *ch){    //��������Ǻ��ֵĲ���
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
	cout<<"��ѯ����ǣ�"<<endl;        //������ҽ��
	do{
			   y=y->other;
			   cout<<"������"<<y->a<<endl<<"�绰��"<<y->b<<endl<<endl;

		   }while(y->other!=NULL);
}


y=head;
do{                                             //��ԭ�����е�otherָ�룬�Ա��´β��ң�
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
	cout<<"a,����ͨѶ¼  "<<"b,�����������ң�֧�ֲ���ȫ���ң�����ֻ���С���ĸ��ֵ����֣�"<<"c,Ӣ���������ң�֧�ֲ���ȫ���ң�����ֻ���С��6���ֵ����֣�"<<
					"d,ʹ�ú����ѯ��֧�ֲ���ȫ���ң�С�ڵ���11λ��"<<"e,�˳�����"<<endl;
				cin>>jg;
				switch(jg){
				case 'a':

					cout<<"������ͨѶ¼����������С��30��"<<endl;
					cin>>n;
					if(n<=0){
						n=10;
					}
					headL1=headL=CreatL(n);
					cout<<"�㽨��ͨѶ¼�ǣ�"<<endl;
					do{
						headL=headL->next;
						 cout<<"������"<<headL->a<<endl<<"�绰��"<<headL->b<<endl<<endl;
					}while(headL->next!=NULL);
					headL=headL1;
					break;
				case 'b':
					cout<<"����������"<<endl;
					cin>>jgs;
					Lhead=&jgs[0];
					SearchNC(headL,Lhead);
					headL=headL1;
					break;
				case 'c':
					cout<<"����������"<<endl;
									cin>>jgs;
									Lhead=&jgs[0];
									SearchNE(headL,Lhead);
									headL=headL1;
									break;

				case 'd':
					cout<<"������룺"<<endl;
												cin>>jgs;
												Lhead=&jgs[0];
												SearchNM(headL,Lhead);
												headL=headL1;
												break;

		}



}while(jg!='e');

    return 0;
}
