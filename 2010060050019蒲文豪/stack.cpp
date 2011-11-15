#include<iostream>
using namespace std;
class sqstack
{
private:
 int top;
 int maxsize;
 int *elem;
public:
 sqstack(int size)
 {maxsize=size;
 elem=new int[maxsize];
  top=0;
 }
 ~sqstack(){delete []elem;}
 int length();
 bool empty(){return top==0;}
 void push(int e);
 void pop(int &e);
 void display();
};
int sqstack::length()
 {
    return top;
 }
void sqstack::push(int e)
 { elem[top++]=e;
   
 }
void sqstack::pop(int &e)   
{ if (!empty())
    {e=elem[--top];
    ;
 }
}
void sqstack::display()
{
 for(int i=top-1;i>=0;i-- )
 {
  cout<<elem[i] <<"  ";
 }
 cout<<endl;
}
int main()
{ int i,x,e;
 sqstack a(100);
 cout<<"输入要建立栈的长度："<<endl;
 cin>>x;
 for(i=1;i<=x;i++)
 {cout<<"请输入要入栈的"<<i<<"个数据:"<<endl;
 cin>>e;
 a.push (e);
 }
 cout<<"显示队栈中的元素为："<<endl;
 a.display ();
 cout<<"输入出栈元素个数:";
 cin>>x;
    cout<<"出栈元素为：";
 for(i=1;i<=x;i++)
 {a.pop (e);
  cout<<e<<"  ";
 }
 cout<<endl;
    cout<<"显示栈中的剩余元素为："<<endl;
 a.display ();
 return 0;

}