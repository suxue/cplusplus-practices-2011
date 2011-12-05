#include<iostream>
using namespace std;
class base
{
  public:
      base()
      {
        cout<<"base I am constructing\n";                                      
      }                      
      ~base()
      {
        cout<<"base I am destructing\n";                       
      }
};

class member
{
 public:
    member()
    {
     cout<<"member I am constructing"<<endl;                                                           
    }                      
    ~member()
    {
      cout<<"member I am destructing\n";                       
    }
};

class derived:public base
{
 member member_class;
 public:
          derived()
          {
          cout<<"derved I am derved"<<endl;                    
          }   
          ~derived()
          {
           cout<<"derved I am destructing";                                                     
          }                      
};
int main()
{
  derived d;
  system("pause");
  return 0;                                 
}
