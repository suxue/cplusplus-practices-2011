#include<iostream>
using namespace std; 
float ftoc(float f){
	  float c;
	  c=(f-32)*5/9;
	  return c;
	  }
float ctof(float c){
	  float f;
	  f=c*9/5+32;
	  return f;
	  }
	  int main(){
	  char i;
	  float data,result;
	  cout<<"请选择操作："<< endl;
	  cout<<"1、将摄氏温转化为华氏温度\n"<<"2、华氏温度转化为摄氏温度\n";
	  cin>>i;
	  switch(i){
	  			case '1':
					 cout<<"输入已知摄氏温度：";
					 cin>>data;
					 result=ctof(data);
					 cout<<"对应的华氏温度为："<<result<<endl;
					 break;
					 
                case '2':
					 cout<<"输入已知华氏温度：";
					 cin>>data;
					 result=ftoc(data);
					 cout<<"对应的摄氏温度为："<<result<<endl;
					 break;
					 
                default:
					 cout<<"error"<<endl;
					 }
					 system("pause");
					 }		   				  
