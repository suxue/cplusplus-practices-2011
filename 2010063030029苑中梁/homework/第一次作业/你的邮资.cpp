#include <iostream>
using namespace std;
int main()
{
    //本程序计算所用邮资
    int j;
	int m;
    cout<<"输入包裹重量"<<endl; 
	cin>>m;
	int n;
	cout<<"输入邮寄距离"<<endl;   //输入基本数据 
	cin>>n;	 
	while(m<=60)
    switch((m+15)/15)
      {
    	case 1:
        cout<<"邮资为5元"<<endl; 
    	break;
    	case 2:
    	cout<<"邮资为9元"<<endl;
    	break;
    	case 3:
		cout<<"邮资为12元"<<endl;
		break;
		case 4:
		j=15+(n/1000);
		cout<<"邮资为"<<j<<endl;
		break;
	  }
	j= 16+(n/1000);
	cout<<"邮资为"<<j<<endl;
}