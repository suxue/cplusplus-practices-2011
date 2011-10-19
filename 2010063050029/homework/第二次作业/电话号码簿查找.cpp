#include<iostream>
#include<string>
using namespace std;
struct person {
string name,number;
};

int main(){
person phonebook[3];
string name,number;
phonebook[0].name="张三";
phonebook[0].number="13665890";
phonebook[1].name="李四";
phonebook[1].number="98765432";
phonebook[2].name="王五";
phonebook[2].number="56789012";
int i,pos,k=1;
cout<<"查找姓名"<<endl;
cin>>name;
for(i=0;i<3;i++){
pos=phonebook[i].name.find(name);
if(pos!=string::npos){
k=0;
cout<<phonebook[i].name<<endl<<phonebook[i].number<<endl;
}
}
k=0;
cout<<"查找号码"<<endl;
cin>>number;
for(i=0;i<3;i++){
pos=phonebook[i].number.find(number);
if(pos!=string::npos){
cout<<phonebook[i].name<<endl<<phonebook[i].number<<endl;
k=0;
}
}
}
