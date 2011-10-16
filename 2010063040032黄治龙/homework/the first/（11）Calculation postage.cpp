//============================================================================
// Name        : （11）Calculation postage
// Author      : 黄治龙
// Description : 计算邮资
//============================================================================

#include <iostream>
using namespace std;

int main() {		//函数入口
	int weight,distance,price;
	cout<<"Please enter the parcel weight"<<endl;		//输入包裹重量
	cin>>weight;
	cout<<"Please enter the mailing distance"<<endl;		//输入邮寄距离
	cin>>distance;
	if(weight<=45){			//小于45克的包裹情况
		if(weight<=15){
			price=5;
		}
		else if(weight>15&&weight<=30){
			price=9;
		}
		else if(weight>30&&weight<=45){
			price=12;
		}
	}
	else{			//大于45克的包裹情况
		if(weight>45&&weight<=60){
			price=14+distance/1000;
		}
		else price=15+distance/1000;
	}
	cout<<"The postage is"<<endl;			//输入结果
	cout<<price<<endl;
	return 0;
}
