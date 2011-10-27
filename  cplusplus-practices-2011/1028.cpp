#include<iostream>
using namespace std;


class a
{
   private:
           int num;
           static int tot;
   public:
           a(int a=1);
           void add() const 
           {
             tot++;
           }
           void show()
           {
             cout<<tot<<endl;
           }
};


int a::tot=0;
a::a(int a)
{
  num=a;
}

int main()
{
  const a A(10);
  a B;
  //for(int i=1;i<=5;i++) A.add();
  A.add();
  
  //  B.show();  
  while(2);  
  return 0;  
}

