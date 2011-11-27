#include<iostream>
#include<string>
using namespace std;
class Felid
{
   private:
      string eating;//食物 
      float vertioy;//速度 
      struct Physical
      {
      	float weight;//重量 
      	float length;//体长 
      	float high;//体高 
      }physical;
   public:
      void setEating(string eating)
      {
      	this->eating=eating;
      }
      string getEating()
      {
         return eating;	
      }
      void setVertioy( float vertioy)
      {
      	this->vertioy=vertioy;
      }
      float getVertioy()
      {
         return vertioy;	
      }
      void setPhysical(float weight,float length,float high)
      {
      	physical.weight=weight;
      	physical.length=length;
      	physical.high=high;
      }
      void getPhysical()
      {
      	cout<<"weight:"<<physical.weight<<'\t';
      	cout<<"length:"<<physical.length<<'\t';
      	cout<<"high:"<<physical.high<<'\t';
      }
      virtual void sound(){}	    
};

class Cat:public Felid
{
	private:  
    public:
       void sound(string s)
       {
       	 cout<<"the sound of cat is "<<s<<endl;
       }
       
};

class Leopard:public Felid
{
	private:
    public:
       void sound(string s)
       {
       	  cout<<"the sound of leopard is "<<s<<endl;
       }
       
};

int main()
{
	Felid felid;
    Cat cat;
    Leopard leopard;
    cat.setEating("eating meat");
    cout<<cat.getEating()<<endl;
    cat.sound("soft");
    cat.setPhysical(0,0,0);
    cat.getPhysical();
    leopard.setVertioy(0);
    cout<<"the vertioy:"<<leopard.getVertioy()<<endl;
    leopard.setPhysical(0,0,0);
    leopard.getPhysical();
    leopard.sound("loud");
    
    system("pause");
}

 
 