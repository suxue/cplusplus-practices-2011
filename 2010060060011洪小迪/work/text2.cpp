/*
 * text2.cpp
 *
 *  Created on: 2011-9-20
 *      Author: –«√Œµœ‘µ
 */

#include<iostream>
using namespace std;
int main(){
	char a='A';
	int i=0;
	for(i=0;i<26;i++){
		cout<<char(a+i)<<" ";
	}
	i--;
	for(;i>0;i--){
		cout<<char(a+i)<<" ";
	}return 0;
}
