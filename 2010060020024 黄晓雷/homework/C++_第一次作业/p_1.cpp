//��100~200֮��Ĳ��ܱ�3����Ҳ���ܱ�7��������
#include<iostream>
using namespace std;
int main()
{
	int i,count=0;
	cout<<"�Ȳ��ܱ�3����Ҳ���ܱ�7���������У�"<<endl;
	for(i=100;i<=200;i++){
		if(!(i%3==0||i%7==0))
		{
			cout<< i<<endl;
		    count++;
		}
	}
	cout<<"****  һ����"<<count<<"��  ****"<<endl;
	return 0;
}