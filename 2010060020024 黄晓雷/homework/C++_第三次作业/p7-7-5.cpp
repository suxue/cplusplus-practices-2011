/*
 *  Author: Huangxiaolei
 *  Date:   2011/10/25
 *  Function: 定义一个学生类。 
 */

#include<iostream>
using namespace std;
#include<string>

class Student {
private:
	char name[30];
	int id;
	char lesson[30];
	float score;
public:
	void set(char *n,int i,char *l,float s) {
		id=i;
		score=s;
		for(int i=0;i<30;i++) { name[i]='\0'; lesson[i]='\0'; }
		strcpy(name,n);
		strcpy(lesson,l);
		name[29]='\0';
		lesson[29]='\0';
	}
	const char* getName() const { return name; }
	int getID() const { return id; }
	const char* getLesson() const { return lesson; }
	float getScore() const { return score; }
};

float avrScore(Student stuArr[],int len) {
	float sum=0.0f;
	for(int i=0;i<len;i++) {
		sum+=(stuArr+i)->getScore();
	}
	return (sum/(float)len);
}

int main() {
	Student stu[5];
	stu[0].set("xiaoE",1005,"OperatingSystem",79.5f);
	stu[1].set("xiaoA",1001,"math",90.3f);
	stu[2].set("xiaoB",1002,"physics",89.9f);
	stu[3].set("xiaoC",1003,"C++",95.3f);
	stu[4].set("xiaoD",1004,"DataStructure",83.2f);
	cout << "平均成绩为：" << avrScore(stu,5) << endl;
	system("pause");
	return 0;
}
