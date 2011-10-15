#include <iostream>
#include <string>
using namespace std;

   int func(string &test){
      //创建临时字符串temp并以字符'0'初始化 
        string temp(test.length(),'0');
     //用参数test给临时字符temp串反向赋值 
        for(int i = test.length();i>0;i--){
            temp[test.length()-i] = test[i-1];
          }
          cout<<"转换后"<<temp<<endl; 
     //比较两字符串,不同返回-1,相同返回0     
        for(int i = 0;i<test.length();i++){
            if(test[i] != temp[i]){
                return -1;
              }
          }
          return 0;
      }
   int main(){
      string s;
      cout<<"请输入字符串:";
      cin>> s;
      if(func(s) == 0){
          cout<<s<<"是回文"<<endl;
          system("pause"); 
        }
        else if(func(s)==-1){
            cout<<s<<"不是回文"<<endl;
          system("pause"); 
          }
          return 0;
   }
