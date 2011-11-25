#include <iostream>
using namespace std;
class Felid{
private:
     int height;
     int weight;
public:
     Felid(int a,int b){
     height=a;
     weight=b;
     }
     void show(){
     cout<<"the heght is"<<height<<endl<<"the weight is"<<weight<<endl;
     }
};
class Cat:public Felid{
private:
     int height;
     int weight;
public:
     Cat(int a,int b):Felid(a,b){
     height=a;
     weight=b;
     }
     virtual void sound(){}
};
class Leopard:public Felid{
private:
     int height;
     int weight;
public:
     Leopard(int a,int b):Felid(a,b){
     height=a;
     weight=b;
     }
     virtual  void sound(){}
};
class fetCat:public Cat{
private:
     int height;
     int weight;
public:
     fetCat(int a,int b):Cat(a,b){
     height=a;
     weight=b;
     }
   void sound(){
   cout<<"miaomiao"<<endl;
   }
   void show(){
   Felid::show();
   }
};
int main(){
fetCat cat(100,200);
cat.sound();
cat.show();
return 0;
}
