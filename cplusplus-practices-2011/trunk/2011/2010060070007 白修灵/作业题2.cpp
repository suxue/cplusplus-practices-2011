/*
 * ��ҵ��2.cpp
 *
 *  Created on: 2011-9-17
 *      Author: linyu
 */

#include "��ҵ��2.h"
using namespace std;
int main(){
	int i=1;
	for(i;i<=200&&i>=100;i++){
		if(i%3==0)
			continue;
		else{
			if(i%7==0)
				continue;
			else
		cout<<i;
		}
	}
}

��ҵ��2::��ҵ��2() {
	// TODO Auto-generated constructor stub

}

��ҵ��2::~��ҵ��2() {
	// TODO Auto-generated destructor stub
}
