//从键盘输入一个整数，判断该数是几位数，逆向输出该数
#include<iostream>
using namespace std;
int main()
{
	int a,b,i=0;
	cout<<"please put in a number"<<endl;
	cin>>a;
	if(a<10)
	{
		cout<<a<<endl;
        i=1;
        cout<<"该数是"<<i<<"位数";
	}
	else
   {
		while(a>=10)
		{
			b=a%10;
			cout<<b;
			i++;
			a=a/10;
		}
		cout<<a<<endl;
		i++;
		cout<<"该数是"<<i<<"位数";
    }
		return 0;
}