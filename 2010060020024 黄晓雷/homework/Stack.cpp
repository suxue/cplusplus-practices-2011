#include<iostream>
#include<stdlib.h>
using namespace std;

class Stack{
 private:
     int MaxSize;
     int top;
     int* data;
 public:
     Stack(int len){
        MaxSize = len;
        top =-1;
        data= new int[MaxSize-1];
        if(!data){
            cout<<"空间分配失败 ！！！"<<endl;
            exit(0);
        }
     }
     bool isEmpty(){
        return (top <= -1);
     }
     bool isFull(){
        return(top >= MaxSize -1);
     }
     void push(int elem){
          if(!isFull()){
              top++;      
              cout<<elem<<"入栈成功"<<endl;    
              data[top]= elem;

          }else{
              cout<<"栈满，不可入栈 ！！！"<<endl;
              cout<<elem<<"入栈失败"<<endl;
          }
     }
     int pop(){
         if(!isEmpty()){
              return data[top--];
         }else{
               cout<<"栈空，不可出栈 ！！！"<<endl;
               return -1;
         }
     }
     ~Stack(){              
         if(data){
             delete data;
             *data = 0;
         }
         top = 0;
         MaxSize = 0;
     }
 };
 
int main(){
	Stack s(10);
	int i,j;
	cout<<"入栈测试："<<endl;
   for(i=0;i<=11;i++){
		s.push(i);
	}
	cout<<endl;
	cout<<"出栈测试："<<endl;
	for(j=0;j<=11;j++){
		cout<<s.pop()<<'\t';
	}
	cout<<endl;
	system("pause"); 
    return 0;
}
     
     
     
     
     
     
     
     
     
     
                        
     
     
     
     
     
     
     
     
     
     
     
     
     
      
              
     
             
         

