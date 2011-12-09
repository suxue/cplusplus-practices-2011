#include<iostream>
using namespace std;

template<class T>// ���԰Ѽ��벻ͬ���ջ���߼������� 
class Stack
{
  private:
          int size;
          int top;
          T* space;
  public:
         Stack(int=10);
         ~Stack()
         {
           delete []space;
         }
         bool push (const T&) ;
         T pop();
         bool isEmpty() const
         {
           return top==size;
         }
         bool isFull() const
         {
           return top==0;
         }
};

template<class T>
Stack <T>::Stack(int _size)//���캯�� 
{
  size=_size;
  space=new T[size+1];
  top=size;
}

template<class T>
bool Stack<T>::push(const T& element)//����ջ��ʱ��Ҫ����һ��ָ����� 
{
  if(!isFull())
  {
    space[--top]=element;
    return true;
  }
  return false;
}

template<class T>//��ջ~ 
T Stack<T>::pop()
{
  if(!isEmpty())
    return space[top++];
  return 0;
}

int main()
{

  int n;
  cout<<"��������Ҫ������ַ�����: ";
  cin>>n;
  Stack<char> s1(n);
  getchar();
  for(int i=1;i<=n;i++)
  {
    char temp=getchar();
    s1.push(temp);
  }
  
  while(!s1.isEmpty())
    cout<<s1.pop();
  while(3);
  return 0; 
}
