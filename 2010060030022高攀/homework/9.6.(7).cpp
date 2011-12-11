#include<iostream>
#include<stdlib>
using namespace std;

class Felid{
	public:
       	   Felid(){
               cout<<"Felid constructor."<<endl;
	           cout<<"Felid destructor."<<endl;
           }
	       virtual void sound() const
	       {
               cout<<"Felid sound!"<<endl;
	       }
};

class Cat :public Felid{
   	public:
   	       Cat(){
	   	       cout<<"Cat constructor."<<endl;
	   	       cout<<"Cat destructor."<<endl;
	       }
   	       void sound() const{
	           cout<<"Miaow !"<<endl;
	       }
};

class Leopard:public Felid{
   	public:
           Leopard(){
	   	       cout<<"Leopard constructor."<<endl;
	   		   cout<<"Leopard destructor."<<endl;
	       }
           void sound() const
		   {
			   cout<<"Howl!"<<endl;
		   }  	
};

int main(){
    Felid *animal;
   	animal=new Cat;
   	animal->sound();
   	animal=new Leopard;
   	animal->sound();
}






