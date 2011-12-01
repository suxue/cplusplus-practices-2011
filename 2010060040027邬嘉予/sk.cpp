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
{ int i,x,t;
sqstack a(100);
cout<<"����Ҫ����ջ�ĳ��ȣ�"<<endl;
cin>>x;
for(i=1;i<=x;i++)
{cout<<"������Ҫ��ջ��"<<i<<"������:"<<endl;
cin>>t;
a.push (t);
}
cout<<"��ʾ��ջ�е�Ԫ��Ϊ��"<<endl;
a.display ();
cout<<"�����ջԪ�ظ���:";
cin>>x;
cout<<"��ջԪ��Ϊ��";
for(i=1;i<=x;i++)
{a.pop (t);
cout<<t<<"  ";
}
cout<<endl;
cout<<"��ʾջ�е�ʣ��Ԫ��Ϊ��"<<endl;
a.display ();
return 0;

}