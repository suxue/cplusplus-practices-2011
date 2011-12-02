//字符串类与对象
#include<iostream>
#include<stdlib.h>
using namespace std;
class String 
{
  private:
         char *Str;
         int len;
  public:
         void ShowStr()
         {
          cout<<"string :"<<Str<<",length:"<<len<<endl;                                   
         }                      
         
         String()
         {
           len=0;
            Str=NULL;                       
         }
         String(const char *p)
         {
           len=strlen(p);
           Str=new char[len+1];
           strcpy(Str,p);                                   
         }
         ~String()
         {
           if(Str!=NULL)
           {
           delete[]Str;
           Str=NULL;
            }                                                   
         }
};

int main()
{
 char s[]="ABCDE";
 String s1(s);
 String s2("123456");
 s1.ShowStr();
 s2.ShowStr();
 system("pause");
 return 0;                                                                
}
