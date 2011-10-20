#include<iostream>   //对于第一个p_5.12作业的改错及改进！
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
						cout<<"input p"<<"("<<i<<")"<<endl<<"姓名:"<<endl;

						cin>>p->name;
						cout<<"电话:"<<endl;
		                 cin>>p->call;
					}
                nall.call="******";
                nall.name="******";
                nall.next=NULL;
                nall.other=NULL;
				p->next=&nall;

				p->other=&nall;                  //n为节点数,其中有两个空指针，第一和最后其目的是让后面的方法在第一次遍历时有头尾空节点

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
                    	  temp=seek->name;        //将search 方法增加了一个参数choose,用于判断名字和号码的查找，虽然每次判断会降低效率，但是可以提高代码的复用；
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
       	cout<<"查询结果是："<<endl;                            //输出查找结果
        prin(newl);
       }

       do{                                             //（这里改进了旧版的错误--无法链表还原，其主要原因是每次新链表的next指针会变）还原链表中的other指针，以便下次查找；
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
		        	cout<<"姓名："<<temp->name<<endl<<"电话："<<temp->call<<endl;
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
	cout<<"当你第一次使用时，需要创建一个你自己的通讯录，请输入通讯录的人数："<<endl;
	cin>>n;
	Adlist mine(n);
	cout<<"-----------你的通讯录------------"<<endl;
	mine.printCall();
	cout<<"-----------end----------------"<<endl;
     while(chose!='e'){
    	 cout<<"如果需要查找，a,按姓名查找（支持不完全查找）；b,按号码查找（支持不完全查找）；输入e退出程序"<<endl;
    	 cin>>chose;

    	 switch(chose){
    	 case 'a':
    		 cout<<"请输入名字："<<endl;
    		 cin>>in;
    		 mine.search(in,'n');
    		 break;
    	 case 'b':
    		 cout<<"请输入号码："<<endl;
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
