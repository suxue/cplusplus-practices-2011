/*
 * 作业11.cpp
 *
 *  Created on: 2011-9-17
 *      Author: linyu
 */

#include "作业11.h"
using namespace std;
int 邮资(float i,float j){
	if(i<=15)
		return 5;
	else{
		if(i>15&&i<=30)
			return 9;
		else{
			if(i>30&&i<=45)
	  			return 12;
			else{
				int p=int(j/1000);
			    if(i>45&&i<=60)
			    	return 14+p;
			    else
			    	return 15+p;
			}
			}
		}
}
作业11::作业11() {
	// TODO Auto-generated constructor stub

}

作业11::~作业11() {
	// TODO Auto-generated destructor stub
}
