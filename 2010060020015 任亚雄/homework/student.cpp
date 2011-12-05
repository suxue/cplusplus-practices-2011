#include<iostream>
#include<string>
using namespace std;
class people 
{
 long ID;
 char name[20];
 char sex;
 public:
         people(long num=0,char * n="Carl",char s='m')
         {
           ID=num;
           strcpy(name,n);
           sex=s;                       
         }       
         void display()
         {
          cout<<"people :ID="<<ID;
          cout<<"name:"<<name<<"sex:"<<sex<<endl;                               
         }             
};

class student:public people
{
 int s_ID;
 public:
       int s_ClassID;
       
       student(int sID=0,int sc=0)
       {
         s_ID=sID;
         s_ClassID=sc;                      
       }            
       
       void d_display()
       {
         cout<<"student :"<<endl;
         display();
         cout<<"  s_ID="<<s_ID<<"  class"<<s_ClassID<<endl;                                   
       }               
};

int main()
{
  student s;
  s.d_display();
  system("pause");
  return 0;                       
}
