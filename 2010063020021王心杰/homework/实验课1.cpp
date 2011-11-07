 #include<iostream>
using namespace std;
struct jd{
   int data;
   struct jd *next;
      };
class Stack{
public:
    struct jd *top;

    int push(int a){
    struct jd *t;
    t=new struct jd;
    t->data=a;
    t->next=top;
    top=t;
    return top->data;
    }

    int pop(){
    struct jd *t;
    t=top;
    top=top->next;
    t->next=NULL;   
      return t->data;
    }

    int isempty(){
    if(top==NULL)
       return 1;
    else
      return 0;
    }

            };
main()
{
Stack test;
test.top=NULL;
cout<<test.push(10)<<endl;
cout<<test.push(11)<<endl;
cout<<test.push(12)<<endl;
cout<<test.push(13)<<endl;
cout<<test.pop()<<endl;
cout<<test.pop()<<endl;
cout<<test.pop()<<endl;
cout<<test.isempty()<<endl;
cout<<test.pop()<<endl;
cout<<test.isempty()<<endl;

}