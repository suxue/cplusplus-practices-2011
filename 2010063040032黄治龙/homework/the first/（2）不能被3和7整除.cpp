/*
 * the author:������
 * the content:��2����100~200֮�䲻�ܱ�3Ҳ���ܱ�7��������
*/
#include<iostream>
using namespace std;

int main()		//�������
{
    int i;		//����ֲ�����
    cout<<"the result is"<<endl;
    for(int i=100;i<=200;i++)		//100~200��ѭ��
    {
    	if((i%3!=0)&&((i%7!=0)))
    		cout<<i<<endl;			//������
    }
    return 0;
}
