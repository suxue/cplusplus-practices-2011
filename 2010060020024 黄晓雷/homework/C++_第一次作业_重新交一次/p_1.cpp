//求100~200之间的不能被3整除也不能被7整除的数
#include<iostream>
using namespace std;
int main()
{
	int i,count=0;
	cout<<"既不能被3整除也不能被7整除的数有："<<endl;
	for(i=100;i<=200;i++){
		if(!(i%3==0||i%7==0))
		{
			cout<< i<<endl;
		    count++;
		}
	}
	cout<<"****  一共有"<<count<<"个  ****"<<endl;
	return 0;
}