#include<iostream>
using namespace std;
class Circle{
	private:
	double r,S,C;
	static double const pi;
	public:
	
	double Area(){				//��� 
		S=r*r*pi;
		return S;
	}
	double Circu(){    			 //�ܳ� 
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
	double h,Sz,Sc;					//SzΪ�ܱ������ScΪ���� 
	double V;
	Circle s;						//���� 
	public:
	double Areace(){				//�����С 
	     Sc=s.Circu()*h;
	     return Sc;
		 }
	double Areazo(){				//�ܱ���� 
		Sz=s.Area()+s.Circu()*h;
		return Sz;
	}
	double Vol(){					//��� 
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
class Pipe{ 			//����		
	private:
		Cylinder Ci;	//��Բ�� 
		Cylinder Co;   //��Բ�� 
		double v;
 	public:
 	double V(Cylinder& Co,Cylinder& Ci){			//��� 
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
	cout<<"1:Բ;2:Բ��;3:����;����:�˳���"<<endl;
	cin>>i; 
	while(i!=0){
	if(i==1){				//Բ 
		double r;
		cout<<"�������Բ�뾶:"<<endl;
		cin>>r;
		Circle circle(r);
   	 	double temp;
   	 	temp=circle.Circu();
		cout<<"Բ���ܳ�:"<<temp<<endl;
		temp=circle.Area();
		cout<<"Բ�����:"<<temp<<endl;
	}	
	else if(i==2){		//Բ��	
	double r,h;
	cout<<"�������Բ����ĵ���뾶�͸�:"<<endl;
	cin>>r>>h;
	r=r,h=h;;
    Circle circle(r);
	Cylinder cylinder(circle,h);
	double temp;
	temp=circle.Circu();
	cout<<"�����ܳ�:"<<temp<<endl;
	temp=circle.Area();
	cout<<"�����:"<<temp<<endl;
	temp=cylinder.Areace();
	cout<<"�����:"<<temp<<endl;
	temp=cylinder.Areazo();
	cout<<"�ܱ����:"<<temp<<endl;
	temp=cylinder.Vol(); 
	cout<<"���:"<<temp<<endl;
	}
	else if(i==3){		//���� 
	double ri,ro,h,temp;
	cout<<"����������ù��ӵ�����뾶�͸�:"<<endl;
	cin>>ri>>ro>>h;
 	Circle ci(ri);
 	Circle co(ro);
 	Cylinder Ci(ci,h);
 	Cylinder Co(co,h);
 	Pipe Test(Ci,Co);
 	temp=Test.V(Co,Ci);
 	cout<<"�ù��ӵ����:"<<temp<<endl; 
	}
	else exit(0); 
	cout<<"1:Բ;2:Բ��;3:����;����:�˳�"<<endl;
	cin>>i;
	}
}
