#include <iostream>
#include <string>
using namespace std;

   int func(string &test){
      //������ʱ�ַ���temp�����ַ�'0'��ʼ�� 
        string temp(test.length(),'0');
     //�ò���test����ʱ�ַ�temp������ֵ 
        for(int i = test.length();i>0;i--){
            temp[test.length()-i] = test[i-1];
          }
          cout<<"ת����"<<temp<<endl; 
     //�Ƚ����ַ���,��ͬ����-1,��ͬ����0     
        for(int i = 0;i<test.length();i++){
            if(test[i] != temp[i]){
                return -1;
              }
          }
          return 0;
      }
   int main(){
      string s;
      cout<<"�������ַ���:";
      cin>> s;
      if(func(s) == 0){
          cout<<s<<"�ǻ���"<<endl;
          system("pause"); 
        }
        else if(func(s)==-1){
            cout<<s<<"���ǻ���"<<endl;
          system("pause"); 
          }
          return 0;
   }
