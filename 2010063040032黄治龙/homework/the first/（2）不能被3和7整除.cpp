/*
 * the author:黄治龙
 * the content:（2）求100~200之间不能被3也不能被7整除的数
*/
#include<iostream>
using namespace std;

int main()		//函数入口
{
    int i;		//定义局部变量
    cout<<"the result is"<<endl;
    for(int i=100;i<=200;i++)		//100~200的循环
    {
    	if((i%3!=0)&&((i%7!=0)))
    		cout<<i<<endl;			//输出结果
    }
    return 0;
}
