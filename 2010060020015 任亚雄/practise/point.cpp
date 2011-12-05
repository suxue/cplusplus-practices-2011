#include<iostream>
using namespace std;
class point
{
  int x,y;
  public:
       point(int X,int Y);
       friend void print(point &p);                            
};
point::point(int X,int Y)
{
  x=X;
  y=Y;                       
}
void print(point &p)
{
  cout<<p.x<<endl<<p.y<<endl;                                                         
}

int main()
{
 point t(1,2);
 print(t);
 system("pause");
 return 0;
                                                                                       
}
