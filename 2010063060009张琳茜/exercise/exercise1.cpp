//�Ӽ�������һ���������жϸ����Ǽ�λ���������������
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
        cout<<"������"<<i<<"λ��";
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
		cout<<"������"<<i<<"λ��";
    }
		return 0;
}