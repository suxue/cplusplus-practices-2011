#include<iostream>
using namespace std;
main(){
	class STACK
	{ 
	private: 
	int base[100]; 
	public: 
	int size; 
	STACK(){size=0;}; 
		void push(int a)
			{ 
				base[size++]=a; 
			}	 
		int pop()
			{ 
				return base[--size]; 
			} 
	};
}