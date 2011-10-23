#include<iostream>
using namespace std;
class Stack{
    private:
     int *a;
     int flag;
     public:
     Stack(int n){
          a=new int[n];
          flag=0;
     }
     void push(int x){
         a[++flag]=x;
     }
     int pop(){
         return a[flag--];
     }
     bool isEmpty(){
         return flag==0;
     }
};
int main()
{
    Stack s(10);
    s.push(100);
    cout<<s.pop()<<endl;
    if(s.isEmpty())
    cout<<"Stack is empty!"<<endl;
    return 0;
}
