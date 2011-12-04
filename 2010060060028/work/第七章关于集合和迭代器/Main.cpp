/*
 * Main.cpp
 *
 *  Created on: 2011-12-2
 *      Author: wepe
 */
#include"Set.h"
#include<iostream>
using namespace std;
int main(){
     Set set1,set2;
     set1.insert(1);
     set1.insert(10);
     set2.insert(1);
     set2.insert(2);
     set2.insert(5);
     set2.insert(6);
     cout<<"set1 element:";
     set1.prinSet();
     cout<<endl;
     cout<<"set2 element:";
     set2.prinSet();
     cout<<endl;
     if(set1.isElement(1)){
    	 cout<<"1 is the element of set1"<<endl;
     }else{
    	 cout<<"1 is not the element of set1"<<endl;
     }
     if(set1.isEmpty()){
        cout<<"set1 is empy"<<endl ;
     }else{
    	 cout<<"set1 is not empty"<<endl;
    	 cout<<"set1's size is "<<set1.size()<<endl;
     }
     cout<<"set1 union set2 is:";
    set1.union1(&set2).prinSet();
     cout<<endl;
     cout<<"set1 and set2 intersection is : ";
    set1.intersection(&set2).prinSet();
     cout<<endl;
     cout<<"set1 and set2 difference is : ";
     set1.difference(&set2).prinSet();

	return 1;
}

