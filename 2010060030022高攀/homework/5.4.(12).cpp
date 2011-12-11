#include<iostream>
#include<stdlib>
using namespace std;

struct people
{
	string name;
	double number;
};

int main()
{
    int i,j,k;
	people p[100];
	string name1,name2;
	double number1,number2;
	for(i=0;i<3;i++)
	{
		cin>>name1>>number1;
		p[i].name=name1;
		p[i].number=number1;
	}
	cout<<"输入名字查找：";
	cin>>name2;
	for(j=0;j<100;j++)
	if(p[j].name==name2)
	{
	  cout<<"name="<<p[j].name<<endl;
 	  cout<<"number="<<p[j].number<<endl;
	}
	cout<<"输入号码查找：";
	cin>>number2;
	for(int k=0;k<100;k++)
	if(p[k].number==number2)
	{
	  cout<<"name="<<p[k].name<<endl;
 	  cout<<"number="<<p[k].number<<endl;
	}
	
	system("pause");
    return 0;	
}
