#include<iostream>
using namespace std;
class student
{
  private:
           int Chinese,Math,English;
           char *name;
  public:
      student(int a,int b,int c,char *name)
       {
       Chinese=a;
       Math=b;
       English=c;
       name=name;                       
       }
       ~student()
        {
         cout<<"try";                                         
          }
          int count()
          {
            return Chinese+Math+English;                                  
          }
}



int main()
{
 student student1(13243,3435,45,"ren");
 cout<<student1.count()<<endl;
 system("pause");
 return 0;                                                       
}
