#include <iostream>
using namespace std;
int main()
{
	int fee;
	float weight,distance;
	cout<<"��������������ʼľ��룡";
	cin>>weight>>distance; 
	switch((int)weight/15)
	{
		case 0:case 1:
		fee=5;
		break;
		case 2:
		fee=9;
		break;
		case 3:
		fee=12;
		break;
		case 4:
		fee=14+int(distance/1000);
		break;
		defult:
		fee=15+int(distance/1000);
	}
	cout<<"����="<<fee;
}