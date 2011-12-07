/*
 *  Author: Huangxiaolei
 *  Date:   2011/10/25
 *  Function: ����һ���������� Ctriangle�� 
 */

#include<iostream>
using namespace std;
#include<math.h>

class Ctriangle {
private:
	double a,b,c;
public:
	Ctriangle(int aa=1,int bb=1,int cc=1):a(aa),b(bb),c(cc) {
		if((a+b<=c)||(a+c<=b)||(b+c<=a)||a<=0||b<=0||c<=0) {
			cout << "ERROR IN CONSTRUCTION." << endl;
			system("pause");
			exit(-1);
		}
	}
	double circ() const;
	double area() const;
};

double Ctriangle::circ() const {
	return a+b+c;
}

double Ctriangle::area() const {
	double q=0.5*(a+b+c);
	return sqrt(q*(q-a)*(q-b)*(q-c));
}

int main () {
	Ctriangle ct(3,4,5);
	cout << "�ܳ���" << ct.circ() << endl;
	cout << "�����" << ct.area() << endl;
	system("pause");
	return 0;
}
