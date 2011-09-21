//============================================================================
//
 Name        : task3.cpp

// Author      : 

// Version     :

// Copyright   : Your copyright notice

// Description : Hello World in C++, Ansi-style

//============================================================================


#include <iostream>

using namespace std;


int main()
 {
	
int weight;
	
int money;
	
int distance;
	
cout<<"输入你的重量，按照邮寄标准！"<<endl;

	cin>>weight;
	switch(weight)

	{
	case 15:
		
                     money=5;
	
           	     break;
	
               case 30:
		
                     money=9;
		
                     break;
	
              case 45:
		
                    money=12;
	
               	    break;
	
              case 60:
		
                   cout<<"输入你的距离是："<<endl;
	
                   cin>>distance;
		
                   money=14+distance;
		
                   break;
	
             default :
		
                   cout<<"输入你的距离是："<<endl;
		
                   cin>>distance;
		
                   money=15+distance;
	
        }
	
      cout<<"你应该付的钱是："<<money<<endl;
	
    return 0;

}
