#include<iostream>   //���ڵ�һ��p_5.12��ҵ�ĸĴ��Ľ���
#include<string>
using namespace std;
class Adlist{
private:
	struct link{
								string name;
								string call;
								link *next ;
								link *other;

							};
	link *p,*head;
	link nall;
public:
	Adlist(int n){

				head=new link();
				p=head;
				int i;
				for(i=1;i<=n;i++){

						p->next=new link();
						p->other=p->next;
						p=p->next;
						cout<<"input p"<<"("<<i<<")"<<endl<<"����:"<<endl;

						cin>>p->name;
						cout<<"�绰:"<<endl;
		                 cin>>p->call;
					}
                nall.call="******";
                nall.name="******";
                nall.next=NULL;
                nall.other=NULL;
				p->next=&nall;

				p->other=&nall;                  //nΪ�ڵ���,������������ָ�룬��һ�������Ŀ�����ú���ķ����ڵ�һ�α���ʱ��ͷβ�սڵ�

				p=head;
	}
void search (string cname,char choose){
	link *newl,*seek;
	string temp;
	newl=p;
	seek=p->other;
       for(int i=0;i<cname.length();i++){
    	   do{
                      if(choose=='n'){
                    	  temp=seek->name;        //��search ����������һ������choose,�����ж����ֺͺ���Ĳ��ң���Ȼÿ���жϻή��Ч�ʣ����ǿ�����ߴ���ĸ��ã�
                      }else{
                    	  temp=seek->call;
                      }
    	   			 if(temp.at(i)==cname.at(i)){

    	   			 		newl->other=seek;
    	   			 		newl=newl->other;
    	   			 		seek=seek->other;
    	   			 		 	 }else{
    	   			 		 	seek=seek->other;
    	   			 		 	 }
    	   		 }while(seek->other!=NULL);
    	   if(newl->other==head->other){
    	   					cout<<"sorry !we can't find the message "<<endl;
    	   					newl->other=NULL;
    	   					break;
    	   				}
    	   newl->other=&nall;

    	   newl=p;
    	   seek=p->other;
    }
       if( newl->other!=NULL){
       	cout<<"��ѯ����ǣ�"<<endl;                            //������ҽ��
        prin(newl);
       }

       do{                                             //������Ľ��˾ɰ�Ĵ���--�޷�����ԭ������Ҫԭ����ÿ���������nextָ���䣩��ԭ�����е�otherָ�룬�Ա��´β��ң�
    	   p->other=p->next;
    	   p=p->next;

       }while(p->next!=NULL);
       p=head;
       newl=p;


}
	void prin(link *headl){
		link *temp=headl;
		  do{
		        	temp=temp->other;
		        	cout<<"������"<<temp->name<<endl<<"�绰��"<<temp->call<<endl;
		        	cout<<endl;
		        }while(temp->other!=NULL);
	}
	void printCall(){

       prin(p);
	}
};
int main(){
	int n;
	string in;
	char chose;
	cout<<"�����һ��ʹ��ʱ����Ҫ����һ�����Լ���ͨѶ¼��������ͨѶ¼��������"<<endl;
	cin>>n;
	Adlist mine(n);
	cout<<"-----------���ͨѶ¼------------"<<endl;
	mine.printCall();
	cout<<"-----------end----------------"<<endl;
     while(chose!='e'){
    	 cout<<"�����Ҫ���ң�a,���������ң�֧�ֲ���ȫ���ң���b,��������ң�֧�ֲ���ȫ���ң�������e�˳�����"<<endl;
    	 cin>>chose;

    	 switch(chose){
    	 case 'a':
    		 cout<<"���������֣�"<<endl;
    		 cin>>in;
    		 mine.search(in,'n');
    		 break;
    	 case 'b':
    		 cout<<"��������룺"<<endl;
    		    		 cin>>in;
    		 mine.search(in,'a');
    		 break;
    	 case 'e':
    		 cout<<"thank you !";
    		 break;
    	 }
     }



  return 0;
}
