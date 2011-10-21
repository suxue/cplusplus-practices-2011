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
	 for(int i=0;i<3;i++)//输入信息
 	{
	 	cout<<"请输入第"<<i+1<<"个朋友的信息：（姓名 电话号码）"<<endl;
     	cin>>partner[i].name>>partner[i].num;
	 }
while(true)
	{
  	char key[20];
  	int flag=0;
  	int i;
  	cout<<"请输入一个朋友的姓名："<<endl;
  	cin>>key;
  	for(i=0;i<3;i++)
  	if(strcmp(key,partner[i].name)==0)
  		{
   			flag=1;
      		break;
		}
  		if(1==flag)
   			cout<<"该朋友的电话号码是："<<partner[i].num<<endl;
  		else
   			cout<<"没有此哥们的信息，请重新输入"<<endl;
	}
}