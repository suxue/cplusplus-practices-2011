//输入包裹重量及邮寄距离，计算出邮资
#include<iostream>
using namespace std;
int main(){
	int i,j,cost=0;
	cout<<"请输入包裹重量和邮寄距离：";
	cin>>i>>j;

	if(i<=0||j<=0)
		cout<<"********   Error !!!  *********"<<endl;
	else if(i<=15){
		cost=5;
	}else if(i<=30){
		cost=9;
	}else if(i<=45){
		cost=12;
	}else if(i<=60){
		cost=14+j/1000;
	}else
		cost=15+j/1000;

    cout<<"邮资是："<<cost<<endl;

	return 0;
}

