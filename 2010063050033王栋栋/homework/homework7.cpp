#include<iostream>
using namespace std;
class Friend{
	public:
 	char name[20];
 	int num;
		};
int main()
{
 Friend partner[3];
	 for(int i=0;i<3;i++)//������Ϣ
 	{
	 	cout<<"�������"<<i+1<<"�����ѵ���Ϣ�������� �绰���룩"<<endl;
     	cin>>partner[i].name>>partner[i].num;
	 }
while(true)
	{
  	char key[20];
  	int flag=0;
  	int i;
  	cout<<"������һ�����ѵ�������"<<endl;
  	cin>>key;
  	for(i=0;i<3;i++)
  	if(strcmp(key,partner[i].name)==0)
  		{
   			flag=1;
      		break;
		}
  		if(1==flag)
   			cout<<"�����ѵĵ绰�����ǣ�"<<partner[i].num<<endl;
  		else
   			cout<<"û�д˸��ǵ���Ϣ������������"<<endl;
	}
}