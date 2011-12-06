#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
     float c,f;
     int i;
     cout<<"请选择功能\n1为摄氏转华氏\n2为华氏转摄氏\n"<<endl;
     cin>>i;
     switch(i){
     	case 1:
     	cout<<"请输入摄氏度"<<endl;
     	cin>>c;
     	if(c>=-273.15){
	     	f=c*9/5+32;
	     }
	     cout<<"华氏度为：\n"<<f<<endl;
		 break;
		 case 2:
  	    cout<<"请输入摄氏度"<<endl;
     	cin>>f;
     	if(f>=-456.67){
	     	c=5/9*(f-32);
	     }
	     cout<<"摄氏度为：\n"<<c<<endl;
		  
     }
     return 0;
}