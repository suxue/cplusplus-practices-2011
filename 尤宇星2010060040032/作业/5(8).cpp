#include<iostream> 
using namespace std; 
void juage(char b[],int head,int a){                        
       if(a<=head){ 
                cout<<"���ַ����ǻ���!"<<endl; 
       } 
       else{ 
               if(b[head]==b[a]){ 
                                juage(&b[0],head+1,a-1); 
                       } 
                       else{ 
                                cout<<"���ַ������ǻ���! "<<endl; 
                       } 
       } 
} 
int main(){ 
       char b[11]; 
       int i=0; 
        cout<<"pleas input a string (��ʮ���ַ�):"<<endl; 
        cin>>b; 
       while(b[i]!='\0'){ 
                        i++;  
               } 
  juage(&b[0],0,i-1); 
       return 0; 
}