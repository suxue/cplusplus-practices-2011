#include<iostream>
using namespace std;
class Circle{
	private:
	double r,S,C;
	static double const pi;
	public:
	
	double Area(){				//面积 
		S=r*r*pi;
		return S;
	}
	double Circu(){    			 //周长 
		C=2*r*pi;
		return C;
	}
	Circle(){		
		this->r=0;
		}
	Circle(double r){
		this->r=r;
	}
	friend class Cylinder;
	};
double const Circle::pi=3.1415;
class Cylinder{
	private:
	double h,Sz,Sc;					//Sz为总表面积，Sc为侧面 
	double V;
	Circle s;						//底面 
	public:
	double Areace(){				//侧面大小 
	     Sc=s.Circu()*h;
	     return Sc;
		 }
	double Areazo(){				//总表面积 
		Sz=s.Area()+s.Circu()*h;
		return Sz;
	}
	double Vol(){					//体积 
		V=s.Area()*h;
		return V;	
	}
	Cylinder(Circle s,double h){
		this->s=s;
		this->h=h;
		}
	Cylinder(){
   		Circle c();
		this->h=0;
	
		
	} 
	friend class Pipe;
};
class Pipe{ 			//管子		
	private:
		Cylinder Ci;	//内圆柱 
		Cylinder Co;   //外圆柱 
		double v;
 	public:
 	double V(Cylinder& Co,Cylinder& Ci){			//体积 
	 v=Co.Vol()-Ci.Vol();
	 return v;
	 }
	 Pipe(Cylinder Ci,Cylinder Co){
 		this->Ci=Ci;
 		this->Co=Co;
 	}
};
int main(){	
	int i;
	cout<<"1:圆;2:圆柱;3:管子;其他:退出；"<<endl;
	cin>>i; 
	while(i!=0){
	if(i==1){				//圆 
		double r;
		cout<<"请输入该圆半径:"<<endl;
		cin>>r;
		Circle circle(r);
   	 	double temp;
   	 	temp=circle.Circu();
		cout<<"圆的周长:"<<temp<<endl;
		temp=circle.Area();
		cout<<"圆的面积:"<<temp<<endl;
	}	
	else if(i==2){		//圆柱	
	double r,h;
	cout<<"请输入该圆柱体的底面半径和高:"<<endl;
	cin>>r>>h;
	r=r,h=h;;
    Circle circle(r);
	Cylinder cylinder(circle,h);
	double temp;
	temp=circle.Circu();
	cout<<"底面周长:"<<temp<<endl;
	temp=circle.Area();
	cout<<"底面积:"<<temp<<endl;
	temp=cylinder.Areace();
	cout<<"侧面积:"<<temp<<endl;
	temp=cylinder.Areazo();
	cout<<"总表面积:"<<temp<<endl;
	temp=cylinder.Vol(); 
	cout<<"体积:"<<temp<<endl;
	}
	else if(i==3){		//管子 
	double ri,ro,h,temp;
	cout<<"请依次输入该管子的内外半径和高:"<<endl;
	cin>>ri>>ro>>h;
 	Circle ci(ri);
 	Circle co(ro);
 	Cylinder Ci(ci,h);
 	Cylinder Co(co,h);
 	Pipe Test(Ci,Co);
 	temp=Test.V(Co,Ci);
 	cout<<"该管子的体积:"<<temp<<endl; 
	}
	else exit(0); 
	cout<<"1:圆;2:圆柱;3:管子;其他:退出"<<endl;
	cin>>i;
	}
}
