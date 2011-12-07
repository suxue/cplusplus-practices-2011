/*
 * Author: Huangxiaolei
 * Date:   2010/10/26
 * Function: 设计一个建筑物类。 
 */
#include<iostream>
using namespace std;

class Building {
protected:
	int floors;
	double area;
public:
	Building(int f,double a):floors(f),area(a) {}
	int getFLR() const { return floors; } 
	double getAREA() const { return area; }
};

class TeachBuilding : public Building {
private:
	int numOfClassRooms;
	int tID;
public:
	TeachBuilding(int f,double a,int n,int t)
		:
	Building(f,a),numOfClassRooms(n),tID(t) {}
	int getTID() const { return tID; }
	int getNOCR() const { return numOfClassRooms; }
};

class DormBuilding : public Building {
private:
	int numOfDorms;
	int dID;
	int totalStus;
public:
	DormBuilding(int f,double a,int n,int d,int t)
		:
	Building(f,a),numOfDorms(n),dID(d),totalStus(t) {}
	int getNOD() const { return numOfDorms; }
	int getDID() const { return dID; }
	int getTOTALSTUS() const { return totalStus; }
};

int main() {
	TeachBuilding tb(9,12000,80,1);
	DormBuilding db(9,8300,100,3,400);
	cout << tb.getAREA() << '\t' << tb.getFLR() << '\t'
	<< tb.getTID() << '\t' << tb.getNOCR() << endl << endl;
	cout << db.getAREA() << '\t' << db.getFLR() << '\t'
	<< db.getNOD() << '\t' << db.getDID() << '\t' << db.getTOTALSTUS() << endl;
	system("pause");
	return 0;
}
