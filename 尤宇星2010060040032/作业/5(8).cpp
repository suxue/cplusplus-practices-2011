#include<iostream> 
using namespace std; 
void juage(char b[],int head,int a){                        
       if(a<=head){ 
                cout<<"该字符串是回文!"<<endl; 
       } 
       else{ 
               if(b[head]==b[a]){ 
                                juage(&b[0],head+1,a-1); 
                       } 
                       else{ 
                                cout<<"该字符串不是回文! "<<endl; 
                       } 
       } 
} 
int main(){ 
       char b[11]; 
       int i=0; 
        cout<<"pleas input a string (限十个字符):"<<endl; 
        cin>>b; 
       while(b[i]!='\0'){ 
                        i++;  
               } 
  juage(&b[0],0,i-1); 
       return 0; 
}