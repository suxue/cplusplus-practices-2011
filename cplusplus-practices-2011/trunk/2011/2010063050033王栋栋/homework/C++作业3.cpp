#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Please enter the weight:";
cin>> n;
	if(n<=15){
			cout<<"包裹重量是"<<n<<'\t'<<"邮资是5元一件哦"<<endl;
			}
	if(n>15&&n<=30){
			cout<<"包裹重量是"<<n<<'\t'<<"邮资是9元一件哦"<<endl;
		 	}
	if(n>30&&n<=45){
			cout<<"包裹重量是"<<n<<'\t'<<"邮资是12元一件哦"<<endl;
 			}				
	if(n>45&&n<=60){
			cout<<"包裹重量是"<<n<<'\t'<<"邮资是14元一件哦，而且每满1000公里加收1元"<<endl;
			}		
	if(n>=75){
			cout<<"包裹重量是"<<n<<'\t'<<"邮资是15元一件哦，而且每满1000公里加收1元"<<endl;
	 		}
	}