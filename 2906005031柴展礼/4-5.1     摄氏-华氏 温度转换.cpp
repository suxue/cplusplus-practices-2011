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
	  cout<<"��ѡ�������"<< endl;
	  cout<<"1����������ת��Ϊ�����¶�\n"<<"2�������¶�ת��Ϊ�����¶�\n";
	  cin>>i;
	  switch(i){
	  			case '1':
					 cout<<"������֪�����¶ȣ�";
					 cin>>data;
					 result=ctof(data);
					 cout<<"��Ӧ�Ļ����¶�Ϊ��"<<result<<endl;
					 break;
					 
                case '2':
					 cout<<"������֪�����¶ȣ�";
					 cin>>data;
					 result=ftoc(data);
					 cout<<"��Ӧ�������¶�Ϊ��"<<result<<endl;
					 break;
					 
                default:
					 cout<<"error"<<endl;
					 }
					 system("pause");
					 }		   				  
