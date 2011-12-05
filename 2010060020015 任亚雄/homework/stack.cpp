#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
  private:
           char *data;
           static int count;
  public:
           void push(char elem)
           {
             data[count++]=elem;
           }
           stack(int s)
           {
           data=new char[s];
           }
           ~stack(){
                                             delete []data;
                                             }
           char pop()
           {
          return data[count--];                                 
           }                      
};
int stack::count=0;


int main()
{
  stack s(10);
  s.push('a');
  cout<<s.pop()<<endl;
  system("pause");
  return 0;
                                                                                  
}
