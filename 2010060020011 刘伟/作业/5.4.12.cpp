#include<iostream>
#include<cstdlib>
using namespace std;
struct people
{
	string name;
	double number;
};
int main()
{
	people p[100];
	string name1,name2;
	double number1,number2;
	for(int k=0;k<3;k++)
	{
		cin>>name1>>number1;
		p[k].name=name1;
		p[k].number=number1;
	}
	cout<<"输入名字查找：";
	cin>>name2;
	for(int i=0;i<100;i++)
	if(p[i].name==name2)
	{
	  cout<<"name="<<p[i].name<<endl;
 	  cout<<"number="<<p[i].number<<endl;
	}
	cout<<"输入号码查找：";
	cin>>number2;
	for(int i=0;i<100;i++)
	if(p[i].number==number2)
	{
	  cout<<"name="<<p[i].name<<endl;
 	  cout<<"number="<<p[i].number<<endl;
	}
	system("pause");
    return 0;	
}
