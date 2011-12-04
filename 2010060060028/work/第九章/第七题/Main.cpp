/*
 * Main.cpp
 *
 *  Created on: 2011-12-2
 *      Author: wepe
 */
#include"Felid.h"
#include"Cat.h"
#include"Leopard.h"
#include<iostream>
using namespace std;
int main(){

	Felid *animal;
	Cat cat;
	Leopard leo;
    animal=&cat;
    cout<<"the cat's sound: ";
	cout<<animal->sound();
	cout<<endl;
	cout<<"the leopard's sound: ";
    animal=&leo;
	cout<<animal->sound();

	return 1;
}


