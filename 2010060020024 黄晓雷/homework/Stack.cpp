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
            cout<<"�ռ����ʧ�� ������"<<endl;
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
              cout<<elem<<"��ջ�ɹ�"<<endl;    
              data[top]= elem;

          }else{
              cout<<"ջ����������ջ ������"<<endl;
              cout<<elem<<"��ջʧ��"<<endl;
          }
     }
     int pop(){
         if(!isEmpty()){
              return data[top--];
         }else{
               cout<<"ջ�գ����ɳ�ջ ������"<<endl;
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
	cout<<"��ջ���ԣ�"<<endl;
   for(i=0;i<=11;i++){
		s.push(i);
	}
	cout<<endl;
	cout<<"��ջ���ԣ�"<<endl;
	for(j=0;j<=11;j++){
		cout<<s.pop()<<'\t';
	}
	cout<<endl;
	system("pause"); 
    return 0;
}
     
     
     
     
     
     
     
     
     
     
                        
     
     
     
     
     
     
     
     
     
     
     
     
     
      
              
     
             
         

