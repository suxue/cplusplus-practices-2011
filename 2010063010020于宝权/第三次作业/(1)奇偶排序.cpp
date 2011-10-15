#include <iostream>
   using namespace std;
   
   
   void reform(int input[10],int output[10]){
         //交换奇数和偶数的前后位置 
         for(int i = 0;i<9;i++){
           for(int j = i+1;j<10;j++){
                   if((input[i]%2 == 0)&&(input[j]%2 != 0)){
                                  swap(input[i],input[j]);
                                  break;            
            }        
           }   
         }
         int mark = 0;//第一个偶数的下标 
         for(int i = 0;i<10;i++){
                 if(input[i]%2 ==0){
                   mark = i;
                   break;
                 }
         }
         //奇数排序 
         for(int i = 0;i<mark-1;i++){
             for(int j = i+1;j<mark;j++){
          		 if(input[i]>input[j]){
								   swap(input[i],input[j]);
								 }
             }        
         } 
         //偶数排序 
         for(int i = mark;i<9;i++){
            for(int j = i+1;j<10;j++){
                if(input[i]>input[j]){
								   swap(input[i],input[j]);
								 }
              }
            }
         for(int i = 0;i<10;i++){
              output[i] = input[i];
            }
         return ;
   }
   //交换函数 
   void swap(int &a,int &b){
                 int temp = a;
                 a = b;
                 b = temp;
                 return;
        }
        int main(){
        
        int input[10] = {0,0,0,0,0,0,0,0,0,0};
        int output[10] = {0,0,0,0,0,0,0,0,0,0};
        for(int i = 0;i<10;i++){
                  cin>>input[i];
        }
        
        reform(input,output);
        for(int i = 0;i<10;i++){
          cout<<output[i]<<" ";
          }    
          system("pause");    
   }
