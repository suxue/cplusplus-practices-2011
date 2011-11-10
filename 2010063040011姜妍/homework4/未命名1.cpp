#include<iostream>
using namespace std;
class Stack{
      private:int num;
      int N[100];
      public:
             void push(int n){
                  N[++num]=n;
                  }
                  int pop(){
                      return N[--num];
                      }void isempty(){
                            if(N.isempty())
                            cout<<stack is empty<<endl;
                            }
      }void main(void){
            Stack MyStack;
            MyStack.push(100);
            MyStack.pop();
            MyStack.isempty();
            }
