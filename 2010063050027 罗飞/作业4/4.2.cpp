/*
	公司员工薪资计算
	
*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
	
	public:
		Employee(int id, float salry){
			this->id = id;
			this->salry = salry;
			this->name = "manger";
		}
	
		float getSalry(){
			return salry;
		}
		~Employee(){}

		int id;
		string name;
		float salry;

};
 
class Manger:public Employee{
	public :
		Manger(int id,float salry):Employee(id, salry){
			this->name = "Manger";
		}
		float getSalry(){
			return 8000;
		}
		~Manger(){}
		void printInfo(){
			cout<< "id: "<<this->id <<endl<<"name: "<<this->name<<endl<<"salry: "<< this->getSalry()<<endl;
		}
};

class Technician : public Employee{
	
	public : 
		Technician(int id, float salry, int workhour) : Employee(id, salry){
			this->workhour = workhour;
			this->name = "technician";
		}

		float getSalry(){
			salry = workhour * 100;
			return salry;
		}
		
		~Technician(){}

		void printInfo(){
			cout<< "id: "<<this->id <<endl<<"name: "<<this->name<<endl<<"salry: "<< this->getSalry()<<endl;
		}
	private:
	 	int workhour;

};

class Salesman : public Employee {
	public :
			
		Salesman(int id, float salry, float sales) : Employee(id, salry){
			this->sales = sales;
			this->name = "Slaesman";
		}	
		float getSalry(){
			salry = 0.04 * sales;
			return salry; 
		}
		~Salesman(){}

		void printInfo(){
			cout<< "id: "<<this->id <<endl<<"name: "<<this->name<<endl<<"salry: "<< this->getSalry()<<endl;
		}
	private :
		float sales;
};
	
class Salesmanger : public Employee {
	public :
		
		Salesmanger(int id, float salry, float psales) : Employee(id, salry){ 	
			this->psales = psales;
			this->name = "Salesmanger";
		}
	
		float getSalry(){
			salry = 0.005 * psales;
			return salry; 
		}
		
		~Salesmanger(){}
		
		void printInfo(){
			cout<< "id: "<<this->id <<endl<<"name: "<<this->name<<endl<<"salry: "<< this->getSalry()<<endl;
		}
	private :
		float psales;
};

int 
main(){
	Employee e(10000, 10.0);
	Manger m(1, 10);
	Technician t(2,10,1000);	
	Salesman s(3, 0, 1000000.0);
	Salesmanger sm(4, 0,1000000.0);
	
	m.printInfo();
	t.printInfo();
	s.printInfo();
	sm.printInfo();
}
