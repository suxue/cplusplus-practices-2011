#include <iostream>
using namespace std;
int main()
{
    //�����������������
    int j;
	int m;
    cout<<"�����������"<<endl; 
	cin>>m;
	int n;
	cout<<"�����ʼľ���"<<endl;   //����������� 
	cin>>n;	 
	while(m<=60)
    switch((m+15)/15)
      {
    	case 1:
        cout<<"����Ϊ5Ԫ"<<endl; 
    	break;
    	case 2:
    	cout<<"����Ϊ9Ԫ"<<endl;
    	break;
    	case 3:
		cout<<"����Ϊ12Ԫ"<<endl;
		break;
		case 4:
		j=15+(n/1000);
		cout<<"����Ϊ"<<j<<endl;
		break;
	  }
	j= 16+(n/1000);
	cout<<"����Ϊ"<<j<<endl;
}