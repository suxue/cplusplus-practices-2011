/*
 * Author: Huangxiaolei
 * Date:   2010/10/24
 * Function: ��дһ�������ж��Ƿ�Ϊ���� 
 */
 
 #include<iostream>
 #include<stdlib.h>
 #include<string.h>
 #define ture 1
 #define false 0 
 using namespace std; 
 bool isPalindrome(char* a, int len);
 int main(){
     char* p;
     int len;
     cout<<"Input the length of the string:";
     cin>>len;
    
     p=(char*)malloc(sizeof(char)*len);
    // char* p= new char(len);
     if(!p){
          cout<<"ERRoR !!!!"<<endl;
          return -1;     
     }

     cout<<"Input the string:";
     cin>>p;
     if(strlen(p)<len)
        cout<<"���볤�Ȳ�����"<<endl;
     else if(strlen(p)>len) 
        cout<<"���볤�ȹ�����"<<endl; 
     if(isPalindrome( p, len))
        cout<<"It is a palindrome !"<<endl;
     else
         cout<<"It's not a palindrome !!!"<<endl;
     system("pause");
     return 0;
 }
 bool isPalindrome(char* p, int len){
      int i,j,count=0;
      j= len-1;
      for(i=0;i<len;i++){
         if(p[i]==p[j]){
            count++;
         }else{
               break;
         }
         j--;
      }
      if(count==len)
         return ture;
      else 
         return false;
}         
                      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
     
     
