#include <iostream>
using namespace std;
class Set{
private:
	int i;
public:
	Set(int i=0){
		this->i=i;
	}
	void display(){
		cout<<i<<'\n'<<endl;
	}
	friend bool operator <=(Set s,Set t){
		if(s.i>t.i)
		return false;
		else return true;
	}
	friend int operator |(Set s,Set t){
		return s.i|t.i;
	}
	friend int operator &(Set s,Set t){
			return s.i&t.i;
		}
	friend int operator -(Set &s,Set &t){
		return s.i-t.i;
	}
	friend int operator +=(Set &s,Set &t){
		return s.i+=t.i;

	}
	friend int operator -=(Set &s,Set &t){
			return s.i-=t.i;
		}

};


int main() {
Set wang(8),set(5);
wang.display();
wang+=set;
wang.display();
wang-=set;
wang.display();
cout<<wang-set<<endl<<(wang|set)<<endl<<(wang&set);
}
