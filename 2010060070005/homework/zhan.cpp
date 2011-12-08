#include<iostream>
#include"stack.h"

using namespace std;

#define STACK_H_
class stack{
      public:
             stack(int n);
             stack();
             stack(stack &);
             ~stack();
             push(int in);
             int pop();
             bool isEmpty();
      private:
              int *sp;
              int *stack;
              int size;
            };
stack::stack(int size){
                 this->size=size;
                 sp=stack;
                 size=n;
                 };
stack::stack(stack &source){
                 size=source.size;
                 stack=new int[size];
                 sp=stack;
                 for(int i=0;i<size;++i){
                         stack[i]=source.stack[i];
                         }
                 }
stack::stack(){
               stack=new int[100];
               sp=stack;
               size=100;
               }
stack::~stack(){
                delete[]stack;
                }
stack&stack::push(int in){
                      *(++sp)=in;
                      return *this;
                      }
int stack::pop(){
           return *sp--;
           }
bool stack::isEmpty(){
     return sp==stack;
     }
    
int main(){
    stack s;
    stack s2(s);
    s2.push(200),push(300),push(400);
    cout<<s2.pop()<<endl;
    if(s2.isEmpty()){
        cout<<"stack is Empty!"<<endl;
        }
        return 0;
        system("pause");
   }
        
    
