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
cout<<"�����绰���������������������绰����"<<endl;
for(i=0;i<N;i++)
cin>>stu[i].name>>stu[i].number;
cout<<"ģ����������"<<endl;
cin>>name;
for(i=0;i<N;i++){
pos=stu[i].name.find(name);
if(pos!=string::npos){
change=0;
cout<<stu[i].name<<endl<<stu[i].number<<endl;
}
}
if(change) cout<<"����ʧ�ܣ�"<<endl;
change=0;
cout<<"ģ�����Һ���"<<endl;
cin>>number;
for(i=0;i<N;i++){
pos=stu[i].number.find(number);
if(pos!=string::npos){
cout<<stu[i].name<<endl<<stu[i].number<<endl;
change=0;
}
}
if(change) cout<<"����ʧ�ܣ�"<<endl;
}

