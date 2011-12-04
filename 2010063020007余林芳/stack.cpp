
#include<iostream>
#include<ctime>
using namespace std;
#define MAX 100/*数组容量*/
struct stackDo
{
   int a[MAX];
   struct stackDo *next;
};
int s;/*存放返回值*/
class stack
{
   private:
       struct stackDo *head;
       int len;
    public:
       stack()
       {
          head=new struct stackDo;
          head->next=NULL;
		  len=0;	    
       }
       void push(int m)
       {
       	   if(len<MAX)
       	   {
   	       	   head->a[len]=m;
   	       	   len++;
   	       }
   	       else
   	       {
       	   	   len=0;
       	   	  struct stackDo *p;
       	   	  p=new struct stackDo;
       	   	  p->a[len]=m;
       	   	  p->next=head;
       	   	  head=p;
       	   	  len++;
       	   }
       }
       int pop(void)
       {
           if(len!=0)
           {
           	   s=head->a[len];
		       len--;
			   return s;  
           }
           else
           {
           	   struct stackDo *p;
           	   p=new struct stackDo;
           	   p=head;
           	   head=head->next;
           	   p->next=NULL;
               s=p->a[len];
               delete p;
               len=MAX-1;
               return s;
           }
       }
       bool isEmpty()
       {
       	   if(head==NULL)
       	   {
   	       	   return true;
   	       }
   	       else
   	           return false;
       }
       ~stack()
       {
       	  cout<<"end of class"<<endl;
       }
} ;
int main()
{
     stack st;
     
     st.push(100);
     if(!st.isEmpty())
        st.pop();
     return 0;
}