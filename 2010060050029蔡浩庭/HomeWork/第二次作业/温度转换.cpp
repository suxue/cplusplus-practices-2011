#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
     float c,f;
     int i;
     cout<<"��ѡ����\n1Ϊ����ת����\n2Ϊ����ת����\n"<<endl;
     cin>>i;
     switch(i){
     	case 1:
     	cout<<"���������϶�"<<endl;
     	cin>>c;
     	if(c>=-273.15){
	     	f=c*9/5+32;
	     }
	     cout<<"���϶�Ϊ��\n"<<f<<endl;
		 break;
		 case 2:
  	    cout<<"���������϶�"<<endl;
     	cin>>f;
     	if(f>=-456.67){
	     	c=5/9*(f-32);
	     }
	     cout<<"���϶�Ϊ��\n"<<c<<endl;
		  
     }
     return 0;
}