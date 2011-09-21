/*
 * 作业题2.cpp
 *
 *  Created on: 2011-9-17
 *      Author: linyu
 */

#include "作业题2.h"
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

作业题2::作业题2() {
	// TODO Auto-generated constructor stub

}

作业题2::~作业题2() {
	// TODO Auto-generated destructor stub
}
