//============================================================================
// Name        : ��11��Calculation postage
// Author      : ������
// Description : ��������
//============================================================================

#include <iostream>
using namespace std;

int main() {		//�������
	int weight,distance,price;
	cout<<"Please enter the parcel weight"<<endl;		//�����������
	cin>>weight;
	cout<<"Please enter the mailing distance"<<endl;		//�����ʼľ���
	cin>>distance;
	if(weight<=45){			//С��45�˵İ������
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
	else{			//����45�˵İ������
		if(weight>45&&weight<=60){
			price=14+distance/1000;
		}
		else price=15+distance/1000;
	}
	cout<<"The postage is"<<endl;			//������
	cout<<price<<endl;
	return 0;
}
