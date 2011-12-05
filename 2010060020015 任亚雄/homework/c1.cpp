#include<iostream>
using namespace std;
class c2;
class c1
{
 int v1,v2;
 public:
     c1(int a,int b)
     {
      v1=a;v2=b;                                       
     }          
     void point(c2 &t2);
     ~c1(){}                                                   
};


class c2
{
  int v1,v2;
  friend class c1;
  public:
        c2(int a,int b)
        {
        v1=a;v2=b;                                                       
        }
        ~c2()
        {}                                                                                                                      
};
void c1::point(c2 &t)
{
 cout<<"x的数据v1="<<v1<<"v2="<<v2<<endl;
 cout<<"y的数据v1="<<v1<<"v2="<<v2<<endl;                                                                                                                                
}


int main()
{
  c1 x(1,2);
  c2 y(3,4);
  x.point(y);
  system("pause");
  return 0;                                                                                                                                                                        
}
