#include<iostream>
using namespace std;
struct tel
{
  char name[20];
  char number[15];// 此处用用字符型处理数字
};
void searchna(tel people[],char name[], int n)
{
 int intsearch=0;
for(int i=0;i<n;i++)
{
  if(strcmp(people[i].name,name)==0)//姓名的精确查找
  {
  cout<<"你输入的姓名是:"<<people[i].name<<"  "<<"对应的号码是:"<<people[i].number<<endl;
  intsearch++;
  }
}
  if(intsearch==0)
 {
    cout<<"对不起，你输入的姓名没有在资料库里面，请重新选择功能1键，进行重新查找"<<endl;
  }

}
void searchtle(tel people[],char number[], int n)//号码的精确查找
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
cout<<"对不起，没有你要找的记录"<<endl;
else
cout<<"共找到了"<<intsearch<<"条记录"<<endl;

}
void searchname(tel people[],char name[], int n)//姓名模糊查询
{
 int intsearch=0;
 for(int i=0;i<n;i++)
 {
  if((people[i].name[0]==name[0])&&(people[i].name[1]==name[1]))// 直接判断
  {
   cout<<"姓名："<<people[i].name<<"  "<<"电话号:"<<people[i].number<<endl;
   intsearch++;
   }
 }
 if(intsearch==0)
 cout<<"对不起，没有找到相关的记录!"<<endl;
 else
 cout<<"总共找到"<<intsearch<<"条记录"<<endl;
}
void searchnum(tel people[],char number[], int n)//号码的模糊查询
{
 int intsearch=0;
 for(int i=0;i<n;i++)
 for(int j=0;j<3;j++)
   {
    if(people[i].number[j]==number[j])//此可以把号码前三位一样的输出
    {
    if(j==2)
     {
      cout<<"学号对应的姓名:"<<people[i].name<<"  "<<"对应的电话号是"<<people[i].number<<endl;
      intsearch++;
     }
    }
    else
     break;
   }
   if(intsearch==0)
   cout<<"对不起，没有这样的电话号"<<endl;
   else
   cout<<"总共找到"<<intsearch<<"条记录"<<endl;
}

int  main()
{
tel people[100];
char name[10], number[15];
int i=0;
int a;
cout<<"请输入数据:（注释：当输入的姓名为#时，而且输入的学号为#时，输入结束）"<<endl;
for(;i<100;i++)
{
 cout<<"请输入第"<<i+1<<"个姓名:";
 cin>>people[i].name;
 cout<<endl;
 cout<<"请输入第"<<i+1<<"个电话号码:";
 cin>>people[i].number;
 cout<<endl;
 if(people[i].name[0]=='#')
 break;
}

cout<<"^^请输入你要选择的操作^^"<<endl;
cout<<"***********************************"<<endl;
cout<<"     ***0:退出查询系统***"<<endl;
cout<<"***********************************"<<endl;
cout<<"     ***1:姓名精确查找***"<<endl;
cout<<"***********************************"<<endl;
cout<<"     ***2:号码精确查找***"<<endl;
cout<<"***********************************"<<endl;
cout<<"     ***3:姓名模糊查找***"<<endl;
cout<<"***********************************"<<endl;
cout<<"     ***4:号码模糊查找***"<<endl;
cout<<"***********************************"<<endl;
while(cin>>a)
{
 switch(a)
 {
   case 0:
   cout<<"!!!"<<endl;
   return 0;
  case 1:
  cout<<"请输入要寻找的姓名信息"<<endl;//姓名的精确查找，输入全名
  cin>>name;
  searchna(people,name,i);
  break;
  case 2:
  cout<<"请输入要寻找的电话号信息"<<endl;//号码的精确查找，输入全号码
  cin>>number;
  searchtle(people,number,i);
  break;
  case 3:
  cout<<"请输入一个姓氏"<<endl;//姓名模糊查找，只输入姓
  cin>>name;
  searchname(people,name,i);
  break;
  case 4:
  cout<<"请输入号码的前三位"<<endl;//号码模糊查找，只输入号码前三位
  cin>>number;
  searchnum(people,number,i);
  break;
  default :
  cout<<"请输入正确的电话号码!!"<<endl;
  break;
 }
 cout<<"请输入你要选择的功能键(0---4)"<<endl;
 }
 system("pause");
 return 0;
} 
