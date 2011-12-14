#include<iostream>
using  namespace std;
int number=3;
class Myclass{
	public:
	int number;
	void set(int i);
};
void Myclass::set(int i)
	{
	number=i;	
	}
int main(){
	Myclass my1;
	int number=10;
	my1.set(5);
	cout<<my1.number<<endl;
	my1.set(number);
	cout<<my1.number<<endl;
	my1.set(::number);
	cout<<my1.number<<endl;
}