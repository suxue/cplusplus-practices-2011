#include<iostream>
#include<string>
#define N 2
using namespace std;
typedef struct{
string name,number;
}student;

main(){
student stu[N];
int i,pos,change=1;
string name,number;
cout<<"构建电话簿，请依次输入姓名、电话号码"<<endl;
for(i=0;i<N;i++)
cin>>stu[i].name>>stu[i].number;
cout<<"模糊查找姓名"<<endl;
cin>>name;
for(i=0;i<N;i++){
pos=stu[i].name.find(name);
if(pos!=string::npos){
change=0;
cout<<stu[i].name<<endl<<stu[i].number<<endl;
}
}
if(change) cout<<"查找失败！"<<endl;
change=0;
cout<<"模糊查找号码"<<endl;
cin>>number;
for(i=0;i<N;i++){
pos=stu[i].number.find(number);
if(pos!=string::npos){
cout<<stu[i].name<<endl<<stu[i].number<<endl;
change=0;
}
}
if(change) cout<<"查找失败！"<<endl;
}

