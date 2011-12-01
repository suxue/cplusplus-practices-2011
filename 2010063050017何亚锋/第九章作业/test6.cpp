//============================================================================
// Name        : intesint6.cpp
// Auinthor      :
// Version     :
// Copyrighint   : Your copyrighint nointice
// Descripinintion : Hello World in C++, Ansi-sintyle
//============================================================================
   //注意<<元素符的优先级比&、|要高
#include <iostream>
using namespace std;
class Set{
private:
	int a;
public:
	Set(int a=0){
		this->a=a;
	}
	void display(){
		cout<<a<<'\t'<<endl;
	}
	friend bool operator <=(Set s,Set t){
		if(s.a>t.a)
		return false;
		else return true;
	}
	friend int operator |(Set s,Set t){
		return s.a|t.a;
	}
	friend int operator &(Set s,Set t){
			return s.a&t.a;
		}
	friend int operator -(Set &s,Set &t){
		return s.a-t.a;
	}
	friend int operator +=(Set &s,Set &t){
		return s.a+=t.a;

	}
	friend int operator -=(Set &s,Set &t){
			return s.a-=t.a;
		}

};


int main() {
Set he(8),set(5);
he.display();
he+=set;
he.display();
he=he-set;
he.display();
cout<<he-set<<endl<<(he|set)<<endl<<(he&set);
return 0;
}
