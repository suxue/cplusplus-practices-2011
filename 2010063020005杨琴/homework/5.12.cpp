#include<iostream>
using namespace std;
struct tel
{
  char name[20];
  char number[15];// �˴������ַ��ʹ�������
};
void searchna(tel people[],char name[], int n)
{
 int intsearch=0;
for(int i=0;i<n;i++)
{
  if(strcmp(people[i].name,name)==0)//�����ľ�ȷ����
  {
  cout<<"�������������:"<<people[i].name<<"  "<<"��Ӧ�ĺ�����:"<<people[i].number<<endl;
  intsearch++;
  }
}
  if(intsearch==0)
 {
    cout<<"�Բ��������������û�������Ͽ����棬������ѡ����1�����������²���"<<endl;
  }

}
void searchtle(tel people[],char number[], int n)//����ľ�ȷ����
{
  int intsearch=0;
 for(int i=0;i<n;i++)
{
    if(strcmp(people[i].number,number)==0)
    {
     cout<<people[i].name<<"  "<<people[i].number<<endl;
     intsearch++;
     }
}
if(intsearch==0)
cout<<"�Բ���û����Ҫ�ҵļ�¼"<<endl;
else
cout<<"���ҵ���"<<intsearch<<"����¼"<<endl;

}
void searchname(tel people[],char name[], int n)//����ģ����ѯ
{
 int intsearch=0;
 for(int i=0;i<n;i++)
 {
  if((people[i].name[0]==name[0])&&(people[i].name[1]==name[1]))// ֱ���ж�
  {
   cout<<"������"<<people[i].name<<"  "<<"�绰��:"<<people[i].number<<endl;
   intsearch++;
   }
 }
 if(intsearch==0)
 cout<<"�Բ���û���ҵ���صļ�¼!"<<endl;
 else
 cout<<"�ܹ��ҵ�"<<intsearch<<"����¼"<<endl;
}
void searchnum(tel people[],char number[], int n)//�����ģ����ѯ
{
 int intsearch=0;
 for(int i=0;i<n;i++)
 for(int j=0;j<3;j++)
   {
    if(people[i].number[j]==number[j])//�˿��԰Ѻ���ǰ��λһ�������
    {
    if(j==2)
     {
      cout<<"ѧ�Ŷ�Ӧ������:"<<people[i].name<<"  "<<"��Ӧ�ĵ绰����"<<people[i].number<<endl;
      intsearch++;
     }
    }
    else
     break;
   }
   if(intsearch==0)
   cout<<"�Բ���û�������ĵ绰��"<<endl;
   else
   cout<<"�ܹ��ҵ�"<<intsearch<<"����¼"<<endl;
}

int  main()
{
tel people[100];
char name[10], number[15];
int i=0;
int a;
cout<<"����������:��ע�ͣ������������Ϊ#ʱ�����������ѧ��Ϊ#ʱ�����������"<<endl;
for(;i<100;i++)
{
 cout<<"�������"<<i+1<<"������:";
 cin>>people[i].name;
 cout<<endl;
 cout<<"�������"<<i+1<<"���绰����:";
 cin>>people[i].number;
 cout<<endl;
 if(people[i].name[0]=='#')
 break;
}

cout<<"^^��������Ҫѡ��Ĳ���^^"<<endl;
cout<<"***********************************"<<endl;
cout<<"     ***0:�˳���ѯϵͳ***"<<endl;
cout<<"***********************************"<<endl;
cout<<"     ***1:������ȷ����***"<<endl;
cout<<"***********************************"<<endl;
cout<<"     ***2:���뾫ȷ����***"<<endl;
cout<<"***********************************"<<endl;
cout<<"     ***3:����ģ������***"<<endl;
cout<<"***********************************"<<endl;
cout<<"     ***4:����ģ������***"<<endl;
cout<<"***********************************"<<endl;
while(cin>>a)
{
 switch(a)
 {
   case 0:
   cout<<"!!!"<<endl;
   return 0;
  case 1:
  cout<<"������ҪѰ�ҵ�������Ϣ"<<endl;//�����ľ�ȷ���ң�����ȫ��
  cin>>name;
  searchna(people,name,i);
  break;
  case 2:
  cout<<"������ҪѰ�ҵĵ绰����Ϣ"<<endl;//����ľ�ȷ���ң�����ȫ����
  cin>>number;
  searchtle(people,number,i);
  break;
  case 3:
  cout<<"������һ������"<<endl;//����ģ�����ң�ֻ������
  cin>>name;
  searchname(people,name,i);
  break;
  case 4:
  cout<<"����������ǰ��λ"<<endl;//����ģ�����ң�ֻ�������ǰ��λ
  cin>>number;
  searchnum(people,number,i);
  break;
  default :
  cout<<"��������ȷ�ĵ绰����!!"<<endl;
  break;
 }
 cout<<"��������Ҫѡ��Ĺ��ܼ�(0---4)"<<endl;
 }
 system("pause");
 return 0;
} 
