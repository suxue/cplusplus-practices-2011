#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Please enter the weight:";
cin>> n;
	if(n<=15){
			cout<<"����������"<<n<<'\t'<<"������5Ԫһ��Ŷ"<<endl;
			}
	if(n>15&&n<=30){
			cout<<"����������"<<n<<'\t'<<"������9Ԫһ��Ŷ"<<endl;
		 	}
	if(n>30&&n<=45){
			cout<<"����������"<<n<<'\t'<<"������12Ԫһ��Ŷ"<<endl;
 			}				
	if(n>45&&n<=60){
			cout<<"����������"<<n<<'\t'<<"������14Ԫһ��Ŷ������ÿ��1000�������1Ԫ"<<endl;
			}		
	if(n>=75){
			cout<<"����������"<<n<<'\t'<<"������15Ԫһ��Ŷ������ÿ��1000�������1Ԫ"<<endl;
	 		}
	}